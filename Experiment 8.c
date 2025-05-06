#include <WiFi.h>
#include <HTTPClient.h>
#include "DHT.h"

// WiFi credentials
const char* ssid = "YOUR_WIFI_SSID";
const char* password = "YOUR_WIFI_PASSWORD";

// ThingSpeak API
const char* server = "http://api.thingspeak.com/update";
String apiKey = "YOUR_THINGSPEAK_API_KEY";  // Replace with your channel's Write API Key

// DHT sensor settings
#define DHTPIN 4          // GPIO pin connected to the DHT sensor
#define DHTTYPE DHT22     // Use DHT11 if that's your sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  delay(1000);
  
  dht.begin();

  WiFi.begin(ssid, password);
  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to WiFi");
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature(); // Celsius

  // Check if readings are valid
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    delay(5000);
    return;
  }

  Serial.printf("Temp: %.2f °C, Humidity: %.2f %%\n", temperature, humidity);

  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String url = String(server) + "?api_key=" + apiKey + "&field1=" + String(temperature) + "&field2=" + String(humidity);

    http.begin(url);
    int httpCode = http.GET();

    if (httpCode > 0) {
      Serial.println("Data sent to ThingSpeak successfully");
    } else {
      Serial.printf("Error sending data: %s\n", http.errorToString(httpCode).c_str());
    }
    http.end();
  } else {
    Serial.println("WiFi not connected");
  }

  delay(20000); // ThingSpeak allows one update every 15 seconds minimum
}
