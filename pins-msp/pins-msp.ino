/* Blink without Delay
 Turns on and off a light emitting diode(LED) connected to a digital  
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.
 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 */

void setup() {
  Serial.begin(9600);
  pinMode(P2IN, INPUT_PULLUP);
  pinMode(P1IN, INPUT_PULLUP);

  pinMode(GREEN_LED, OUTPUT);    
  pinMode(RED_LED, OUTPUT); 
  digitalWrite(GREEN_LED, LOW);  
}

void loop()
{
  // 
  // knopf ist NICHT gedrückt ->  PUSH1 wird gelesen -> buttonState ist 0 oder HIGH ->  Programm bleibt stehen beim digitalRead (bei HIGH), wenn INPUT_PULLUP Modus nicht gesetzt ist!!
  // GREEN_LED wird mit digitalWrite 0 oder HIGH geschrieben -> LED leuchtet!!;
  int push2State = digitalRead(P2IN);
  int push1State = digitalRead(P1IN);

  if(push2State == LOW){
digitalWrite(GREEN_LED, HIGH);Serial.print("P2IN");
    
  }
     
  if(push1State == LOW){
    digitalWrite(RED_LED, HIGH); Serial.print("P1IN");
  }
      
  
    
     
}
