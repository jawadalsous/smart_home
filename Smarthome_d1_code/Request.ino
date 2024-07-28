void handleRequests() {
  server.on("/a1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("a1");
  });
  server.on("/b1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("b1");
  });
  server.on("/c1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("c1");
  });
  server.on("/d1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("d1");
  });
  server.on("/e1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("e1");
  });
  server.on("/f1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("f1");
  });
  server.on("/g1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("g1");
  });
  server.on("/h1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("h1");
  });
  server.on("/i1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("i1");
  });
  server.on("/j1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("j1");
  });
  server.on("/k1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("k1");
  });
  server.on("/l1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("l1");
  });
  server.on("/m1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("m1");
  });
  server.on("/n1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("n1");
  });
  server.on("/o1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("o1");
  });
  server.on("/p1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("p1");
  });
  server.on("/q1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("q1");
  });
  server.on("/r1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("r1");
  });
  server.on("/s1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("s1");
  });
  server.on("/t1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("t1");
  });
  server.on("/u1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("u1");
  });
  server.on("/v1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("v1");
  });
  server.on("/w1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("w1");
  });
  server.on("/x1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("x1");
  });
  server.on("/y1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("y1");
  });
  server.on("/z1", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
    Serial.println("z1");
  });
  server.on("/off", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
   Serial.println("off");
  });
  server.on("/html", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/html", webpageCode);
  });
}