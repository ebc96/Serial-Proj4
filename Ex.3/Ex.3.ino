int tempAigua = 123;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
    {
     Serial.print("Aigua bullint");
    }
  
  else if (tempAigua == 100)
    {
     Serial.print("Aigua a 100");
    }
  
  else if (tempAigua >= 90)
    {
     Serial.print("Aigua a punt de bullir");
    }
  
  else 
    {
     Serial.print ("aigua encara no bull"); 
    }
  
}

void loop()   // we need this to be here even though its empty
{}
