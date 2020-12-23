Lamp* ParseLamp(JsonObject jsonLamp)
{
  Lamp* lamp = new Lamp();
  lamp->id = jsonLamp["id"]; // 1
  lamp->port = jsonLamp["port"]; // 1
  lamp->startHour = jsonLamp["startHour"]; // 0
  lamp->startMin = jsonLamp["startMin"]; // 0
  lamp->endHour = jsonLamp["endHour"]; // 2
  lamp->endMin = jsonLamp["endMin"]; // 0
  lamp->duration = jsonLamp["duration"]; // 90
  lamp->lightLevel = jsonLamp["lightLevel"]; // 0
  lamp->dayOfTheWeek = jsonLamp["dayOfTheWeek"]; // 0
  return lamp;
}
