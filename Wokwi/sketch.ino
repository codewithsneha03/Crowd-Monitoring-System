#include <WiFi.h>
#include <PubSubClient.h>

// Wokwi WiFi
const char* ssid = "Wokwi-GUEST";
const char* password = "";

// Public MQTT Broker
const char* mqtt_server = "broker.hivemq.com";

WiFiClient espClient;
PubSubClient client(espClient);

// Connect to MQTT Broker
void reconnect() {
  while (!client.connected()) {

    Serial.print("Connecting to MQTT... ");

    if (client.connect("CrowdMonitor")) {
      Serial.println("Connected!");
    }
    else {
      Serial.print("Failed, rc=");
      Serial.print(client.state());
      Serial.println(" Retrying...");
      delay(2000);
    }
  }
}

void setup() {

  Serial.begin(115200);

  // Connect WiFi
  WiFi.begin(ssid, password);

  Serial.print("Connecting WiFi");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println();
  Serial.println("WiFi Connected!");

  // MQTT Setup
  client.setServer(mqtt_server, 1883);
}

void loop() {

  if (!client.connected()) {
    reconnect();
  }

  client.loop();

  // Simulated crowd density values
  int zoneA = random(50, 1000);
  int zoneB = random(50, 1000);
  int zoneC = random(50, 1000);
  int zoneD = random(50, 1000);

  char msg[20];

  // Zone A
  sprintf(msg, "%d", zoneA);
  client.publish("crowd/zoneA", msg);

  // Zone B
  sprintf(msg, "%d", zoneB);
  client.publish("crowd/zoneB", msg);

  // Zone C
  sprintf(msg, "%d", zoneC);
  client.publish("crowd/zoneC", msg);

  // Zone D
  sprintf(msg, "%d", zoneD);
  client.publish("crowd/zoneD", msg);

  // Serial Output
  Serial.println("================================");
  Serial.print("Zone A: ");
  Serial.println(zoneA);

  Serial.print("Zone B: ");
  Serial.println(zoneB);

  Serial.print("Zone C: ");
  Serial.println(zoneC);

  Serial.print("Zone D: ");
  Serial.println(zoneD);

  Serial.println("Data Published to MQTT");
  Serial.println("================================");

  delay(5000);
}