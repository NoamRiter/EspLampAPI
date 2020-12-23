//https://www.radishlogic.com/arduino/use-c-class-arduino-ide-without-creating-library/
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include "ArduinoJson.h"
#include "Lamp.h"
#include <TimeLib.h>
#include <WiFiUdp.h>

const char* ssid = "Millennium_Falcon2.4";
const char* password = "B71B903683";


static const char ntpServerName[] = "us.pool.ntp.org";

const int timeZone = 1;

WiFiUDP Udp;
unsigned int localPort = 8888;  // local port to listen for UDP packets

time_t getNtpTime();
void digitalClockDisplay();
void printDigits(int digits);
void sendNTPpacket(IPAddress &address);
time_t prevDisplay = 0;

long interval = 1000;
unsigned long previousMillis = 0;

JsonArray lamps;

void setup () {

  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting..");

  }
  // get time
  Serial.println("Starting UDP");
  Udp.begin(localPort);
  Serial.print("Local port: ");
  Serial.println(Udp.localPort());
  Serial.println("waiting for sync");


  setSyncProvider(getNtpTime);
  setSyncInterval(300);

  GetPayLoad();
}

void loop() {

//  unsigned long currentMillis = millis();
//
//  if (currentMillis - previousMillis >= interval)
//  {
//    previousMillis = currentMillis;
//    LampStatus();
//  }

  if (timeStatus() != timeNotSet) {
    if (now() != prevDisplay) { //update the display only if time has changed
      prevDisplay = now();
      digitalClockDisplay();
      LampStatus();
    }
  }

}
