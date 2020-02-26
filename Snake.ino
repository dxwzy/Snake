int button = 12;
int p;
void setup() {
  // put your setup code here, to run once:
pinMode(button,INPUT);
pinMode(8,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
 p = digitalRead(button);
if(p==1){
  digitalWrite(8,0);
  digitalWrite(10,1);
  delay(200);
  digitalWrite(8,1);
  digitalWrite(10,0);
  delay(200);
} else digitalWrite(8,0);
  digitalWrite(10,1);
  delay(25);
  digitalWrite(8,1);
  digitalWrite(10,0);
  delay(25);  }
