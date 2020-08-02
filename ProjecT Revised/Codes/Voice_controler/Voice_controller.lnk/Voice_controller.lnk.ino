
                                                                                               //VoiceControlModule//


int PIN_For_RMotor1 = 11;
int PIN_For_RMotor2 = 10;
int PIN_For_LMotor1 = 5;
int PIN_For_LMotor2 = 6;
String Voice_from_app;
String Error1 = "PINERROR";
String Error2 = "READVoiceERROR!!";
String ERROR = "voiceError";
String Error3 ="NoInput";


void setup() {
  Serial.begin(9600);
  pinMode(PIN_For_RMotor1, OUTPUT);
    pinMode(PIN_For_RMotor2, OUTPUT);
    pinMode(PIN_For_LMotor1, OUTPUT);
    pinMode(PIN_For_LMotor2, OUTPUT);
    if (Serial.available() < 1)
  {
    Serial.println("The Possible Error:- ");
    Serial.println(Error1);
    Serial.println("");
    }
    else
  {
    loop();
    
  }
}



void loop() {
  char Read_Data;
  while (Serial.available() > 0)
  {
    delay(25);
    Read_Data = Serial.read();
    if (Read_Data == '#')  //NULL Value///
    {
      Serial.println("Possible Error : -");
                     Serial.println(Error2);
                     Serial.println("This was the input String that was recived was");
                     Serial.println(Voice_from_app);
                     Debug_DATA();
                   }
                     else 
                   {
                     if(Voice_from_app == "Right")
                   {
                     digitalWrite(PIN_For_RMotor1,HIGH);
                     digitalWrite(PIN_For_RMotor2,LOW);
                     digitalWrite(PIN_For_LMotor1,LOW);
                     digitalWrite(PIN_For_LMotor2,HIGH);
                     delay(10000);
                   }
                     else if (Voice_from_app == "Left")
                   {
                     digitalWrite(PIN_For_RMotor1,LOW);
                     digitalWrite(PIN_For_RMotor2,HIGH);
                     digitalWrite(PIN_For_LMotor1,HIGH);
                     digitalWrite(PIN_For_LMotor2,LOW);
                     delay(10000);

                   }
                     else if(Voice_from_app == "Foward")
                   {
                     digitalWrite(PIN_For_RMotor1,LOW);
                     digitalWrite(PIN_For_RMotor2,HIGH);
                     digitalWrite(PIN_For_LMotor1,LOW);
                     digitalWrite(PIN_For_LMotor2,HIGH);
                     delay(10000);
                   }
                     else if(Voice_from_app =="Reverse")
                   {
                     digitalWrite(PIN_For_RMotor1,HIGH);
                     digitalWrite(PIN_For_RMotor2,LOW);
                     digitalWrite(PIN_For_LMotor1,HIGH);
                     digitalWrite(PIN_For_LMotor2,LOW);
                     delay(10000);
                   }
                     else if (Voice_from_app == "STOP")
                   {
                     digitalWrite(PIN_For_RMotor1,LOW);
                     digitalWrite(PIN_For_RMotor2,LOW);
                     digitalWrite(PIN_For_LMotor1,LOW);
                     digitalWrite(PIN_For_LMotor2,LOW);
                   }
                     else if(Voice_from_app = "Voice")
                   {
                     if(Voice_from_app.length()>0)
                   {
                     Voice_from_app = "test";
                     Serial.println(Voice_from_app); //in Serial Monitor//
                     break;

                   }
                     else 
                   {
                     Serial.println(Error3);
                     break;
                     
                   }
                   }
                   }
  
                   

  }
                  
                   }




                 void Debug_DATA()
                   {
                     String inputD;
                     if(Serial.available() < 1)
                   {
                     Serial.println(Error1);
                     Serial.println("The PIN are working......");
                     delay(2000);
                     Serial.println("Debugging, the Voice ");

                   }
                     else{

                     inputD = Serial.println(Voice_from_app);
                     if(inputD == "#")
                   {
                     Serial.println("No Voice Input from the app.Is it connected to BT ? ");
                     delay(2000);
                     Serial.println("Switching to BT controller Module.........");
                     delay(5000);

                                                                                                  
                                                                                                   
                                                                                                   
                                                                                                   //BTModule//

                                                                                                   //Please Remove comments from the Code, if you want to run BT Module Code//

                     
                     
                     
                    /* String ErrorDebug1;                                                                         //Please Remove comments from the Code, if you want to run BT Module Code//

                     String Debug1 = "Ready";
                     String ErrorSetup = "BTPinError";
                     String Error_BT_2 = "BTDataExtractionModule";
                     void setup() 
                     {
                     Serial.begin(38400);
                     pinMode(8,OUTPUT);
                     if(Serial.available()  < 1)
                   {
                     Serial.Println(ErrorSetup);
                     ErrrorDebug1=ErrorSetup;
                     Debug(ErrorSetup);
                   }

                   }



                     void loop() 
                     {
                     char TransD;
                     //double DataT;
                     if(Serial.available() < 0)
                   {
                     Voice_from_app = Serial.Read();
                     Serial.println("This is the output that was recived from the BT controller: -");
                     Serial.println(Voice_from_app);
                     delay(1000);
                     if(Voice_from_app = '#') //NULL input//
                   {
                     String Debug2=Voice_from_app;
                     Debug(Debug2);
                   }
                    
                   }

                   }
                   }
                  }





                     void Debug()
                        {

                     if(ErrorSetup == "PinErroor")
                     {
                     Serial.println("possible Error at : ");
                     Serial.println(ErrorSetup);
                     delay(10000);
                     
                   }
                     else if(Debug2 = '#')
                     {
                     Serial.println("possible error at : -");
                     Serial.println(Error2_BT_2); // Data  cannot be extracted from the BT // 
                     delay(1000);
                     
                     
                   }

                 }*/                                                                                            //Please Remove comments from the Code, if you want to run BT Module Code//


                         }
                     }                                   // Remove this Bracket to avoid error, when BT module is enabled//  
                }                                         // Remove this Bracket to avoid error, when BT module is enabled//  
                     
               
           
