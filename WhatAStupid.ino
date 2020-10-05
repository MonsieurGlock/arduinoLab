  #define port2 2
  #define port3 3
  #define port4 4
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(port2, OUTPUT);
  pinMode(port3, OUTPUT);
  pinMode(port4, OUTPUT);
  digitalWrite(port2, LOW);
  digitalWrite(port3, LOW);
  digitalWrite(port4, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  //L1
  pinMode(port2, OUTPUT);
  digitalWrite(port2, HIGH);
  pinMode(port3, OUTPUT);
  digitalWrite(port3, LOW);
  pinMode(port4, INPUT);
  digitalWrite(port4, LOW);
  delay(100);
  digitalWrite(port2, LOW);
  digitalWrite(port3, LOW);
  pinMode(port4, OUTPUT);
  digitalWrite(port4, LOW);
  delay(100);
  //L2
  digitalWrite(port2, LOW);
  digitalWrite(port3, HIGH);
  pinMode(port4, INPUT);
  digitalWrite(port4, LOW);
  delay(100);
  digitalWrite(port2, LOW);
  digitalWrite(port3, LOW);
  pinMode(port4, OUTPUT);
  digitalWrite(port4, LOW);
  delay(100);
  //L3
  pinMode(port2, INPUT);
  digitalWrite(port2 ,LOW);
  digitalWrite(port3 ,HIGH);
  digitalWrite(port4 ,LOW);
  delay(100);
  pinMode(port2, OUTPUT);
  digitalWrite(port2, LOW);
  digitalWrite(port3, LOW);
  digitalWrite(port4, LOW);
  delay(12200);
  //L4
  pinMode(port2,INPUT);
  digitalWrite(port2, LOW);
  digitalWrite(port3, LOW);
  digitalWrite(port4, HIGH);
  delay(100);
  pinMode(port2,OUTPUT);
  digitalWrite(port2, LOW);
  digitalWrite(port3, LOW);
  digitalWrite(port4, LOW);
  delay(100);
  //L5
  digitalWrite(port2 ,HIGH);
  pinMode(port3,INPUT);
  digitalWrite(port3, LOW);
  digitalWrite(port4, LOW);
  delay(100);
  pinMode(port3,OUTPUT);
  digitalWrite(port2, LOW);
  digitalWrite(port3, LOW);
  digitalWrite(port4, LOW);
  delay(100);
  //L6
  digitalWrite(port2,LOW);
  pinMode(port3,INPUT);
  digitalWrite(port3, LOW);
  digitalWrite(port4, HIGH);
  delay(100);
  digitalWrite(port2, LOW);
  pinMode(port3,OUTPUT);
  digitalWrite(port3, LOW);
  digitalWrite(port4, LOW);
  delay(100);
}
