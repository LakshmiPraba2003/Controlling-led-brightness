const int ledPin=16;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int dutyCycle=0;dutyCycle<=255;dutyCycle++){
    analogWrite(ledPin,dutyCycle);
    delay(15);
  }
  for(int dutyCycle=255;dutyCycle>=0;dutyCycle--){
    analogWrite(ledPin,dutyCycle);
    delay(15);
  }
}
