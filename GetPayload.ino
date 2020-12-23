void GetPayLoad()
{
  if (WiFi.status() == WL_CONNECTED) { //Check WiFi connection status
    Serial.println("start");
    HTTPClient http;  //Declare an object of class HTTPClient

    http.begin("http://espapi.azurewebsites.net/Lamp/index");  //Specify request destination
    int httpCode = http.GET(); 
    Serial.print("httpcode: ");
    Serial.println(httpCode);
    if (httpCode > 0) { //Check the returning code
      
      String payload = http.getString();   //Get the request response payload
      Serial.print("payload: ");
      Serial.println(payload);                     //Print the response payload


DynamicJsonDocument doc(2048);
  deserializeJson(doc, payload);
 lamps = doc["lamps"];

    }

    http.end();   //Close connection

  }
}
