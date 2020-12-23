void LampStatus()
{

  Serial.println("LampStatus");
  
  Serial.println(millis());
  
  // NowLight
  // TargetLight
  // sunRiseSteg = 4094 /(1.5 *60*60)
  // sunSetSteg = 4094 /(1.5 *60*60)
//  int time = 1406;
//
//
//targetLight = seconds(time - sunrise) * increasePerSecond
//
////sets lampLightTarget
//
//   for (int index = 0; index < lamps.size(); index++)
//  {
//    auto lamp = ParseLamp(lamps[index]);
//    if(time >= lamp.sunRiseTime && time <= lamp.sunSetTime)
//    {
//      NowLight = nowlight + sunrisesteg;
//      if(NowLight > maxlight)
//      {
//        NowLight = maxlight;
//      }
//
//      
//      
//    }
//    else
//    {
//      NowLight = nowlight - sunSetSteg;
//      if(NowLight < minlight)
//      {
//        NowLight = minlight;
//      }
//    }
//    
//  }
}
