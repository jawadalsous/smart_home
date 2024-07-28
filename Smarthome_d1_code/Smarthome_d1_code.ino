//============================================
//ESP8266 Web Server (HTML + CSS + JavaScript)
//============================================
#include <ESP8266WiFi.h>
// #include <ESP8266WebServer.h>
// #include <Wire.h>
#include <ESP8266HTTPClient.h>
#include <ESP8266httpUpdate.h>
#include <ESP8266WiFi.h>
#include "webpageCode.h"
#include <ESPAsyncWebServer.h>
// #include <AsyncTCP.h>
//------------------------------------------
AsyncWebServer server(80);
const char* ssid = "BA Tech";
const char* password = "BAtech110";
// int x = 150;
int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;
int f = 0;
int g = 0;
int h = 0;
int i = 0;
int j = 0;
int k = 0;
int l = 0;
int m = 0;
int n = 0;
int o = 0;
int p = 0;
int q = 0;
int r = 0;
int s = 0;
int t = 0;
int u = 0;
int v = 0;
int w = 0;
int x = 0;
int y = 0;
int z = 0;
String msg = "";
bool Send = 0;
//------------------------------------------
void readSerialPort() {
  msg = "";
  if (Serial.available()) {
    msg = Serial.readStringUntil(char(10));
    if (msg == "on")
      digitalWrite(13, 1);
    if (msg == "lo")
      digitalWrite(13, 0);
    Send = 1;
    delay(300);
  }
}
//=================================================================





void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  //WiFi.softAP(ssid, password);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
// Serial.println();
// Serial.print("AP IP:");
// Serial.println(WiFi.softAPIP());
// Serial.print("IP Address: ");
// Serial.println(WiFi.localIP());
 server.begin();
handleRequests();
pinMode(14, OUTPUT);
}
//=================================================================
void loop() {
  readSerialPort();
  if (Send == 1) {
    delay(100);
    Serial.println(msg);
    msg = "";
    Send = 0;
  }
}
