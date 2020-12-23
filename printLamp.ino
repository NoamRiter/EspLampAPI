
void PrintLamps()
{

  Serial.println("pase data");
  for (int index = 0; index < lamps.size(); index++)
  {
    auto lamp = ParseLamp(lamps[index]);
    Serial.print("ID: ");
    Serial.println(lamp->id);

    Serial.print("startHour: ");
    Serial.println(lamp->startHour);


    Serial.print("endHour: ");
    Serial.println(lamp->endHour);

    Serial.print("port: ");
    Serial.println(lamp->port);

    Serial.println("-----------------------------------------------");
  }
}
