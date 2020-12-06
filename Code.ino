const int ledpin1 = 2;
const int ledpin2 = 3;
const int buttonpin1 = 4;
const int buttonpin2 = 5;

void setup() {
  // put your setup code here, to run once:
   pinMode(ledpin1,OUTPUT);
   pinMode(ledpin2,OUTPUT);
   pinMode(buttonpin1,INPUT);
   pinMode(buttonpin2,INPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  int button1 = digitalRead(buttonpin1);

  int button2 = digitalRead(buttonpin2);

  if(button1 == 1) {
    digitalWrite(ledpin1,HIGH);
  }
  else {
    digitalWrite(ledpin1,LOW);
  }

  if(button2 == 1) {
    digitalWrite(ledpin2,HIGH);
  }
  else {
    digitalWrite(ledpin2,LOW);
  }


  
}
