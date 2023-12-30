/* Blink without Delay
 Turns on and off a light emitting diode(LED) connected to a digital  
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.
 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 */


int prevTime;

void setup() {
  //Serial.begin(9600);
  // Keep in mind the pullup means the pushbutton's
  // logic is inverted. It goes HIGH when it's open,
  // and LOW when it's pressed. Turn on pin 13 when the 
  // button's pressed, and off when it's not:
  pinMode(PUSH2, INPUT_PULLUP);
  pinMode(PUSH1, INPUT_PULLUP);
  pinMode(GREEN_LED, OUTPUT);    
  pinMode(RED_LED, OUTPUT); 
  digitalWrite(GREEN_LED, LOW);
  prevTime = 0;  
}

void loop()
{
  int currentTime = millis();
  // 
  // PUSH1 ist NICHT gedrückt ->  PUSH1 wird gelesen -> buttonState ist 1 oder HIGH 
  // ->  Programm bleibt stehen beim digitalRead (bei LOW oder 0), wenn INPUT_PULLUP Modus nicht gesetzt ist!!
  // GREEN_LED wird mit digitalWrite 1 oder HIGH geschrieben -> LED leuchtet!!;

  if(currentTime - prevTime > 3000){
    prevTime = currentTime;


    /////////
    int push2State = digitalRead(PUSH2);
    int push1State = digitalRead(PUSH1);
  
    if(push2State == LOW){
      digitalWrite(GREEN_LED, HIGH);
      //Serial.print("PUSH2");
      
    }
       
    if(push1State == LOW){
      digitalWrite(RED_LED, HIGH);
      //Serial.print("PUSH1");
    }

    
  }

}
