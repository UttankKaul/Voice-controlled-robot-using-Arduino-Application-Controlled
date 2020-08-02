
                                                                                                     //BT controller//



String ErrorDebug1;
String Debug1 = "Ready";
String ErrorSetup = "PinError";
String Error2 = "BTDataExtractionModule";
double Debug2;
void setup() {
  Serial.begin(38400);                                        //beginning of transmission//
  pinMode(8, OUTPUT);
  if (Serial.available() < 1)
  {
    Serial.println(ErrorSetup);
    ErrorDebug1 == ErrorSetup;
    Debug();
  }

}



void loop() {
  char TransD;
  double DataT;
  int dataT;

  if (Serial.available() > 0)       // Check the availablty of the Device//
  {
    TransD = Serial.read();
    DataT = TransD; //from the app//
    Serial.println("This is the output that was recived from the BT controller");
    Serial.println(DataT);
    if (DataT = 0)
    {
      Debug2 = DataT;
      Debug();
    }
    else 
  {
    switch (dataT)
      {
        case 'a' : digitalWrite(8, HIGH);                   //Write onto BT device//
          break;
        case 'b' : digitalWrite(8, HIGH);
          break;
default :
          break;

      }
      
    }
  }
}





void Debug()                                           //Debug Module//
{

  if (Debug1)
  {
    Serial.println("No Errors found yet");
    Serial.println("The BT module is Ready for transmission");
    loop();
  }
  else if (ErrorSetup == "PinErroor")
  {
    Serial.println("possible Error at :");
    Serial.println(ErrorSetup);
  
  }
  else if (Debug2 = 0)
  {
    Serial.println("possible error at :-");
                   Serial.print(Error2);
                   
  }

}
