void setup() 
{
  // put your setup code here, to run once:
  pinMode (7,OUTPUT);
  pinMode (8,OUTPUT);
  pinMode (9,OUTPUT);
  pinMode (10,OUTPUT);
  pinMode (11,OUTPUT);
  pinMode (12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (7,LOW);
  digitalWrite (8,LOW);
  digitalWrite (9,LOW);
  digitalWrite (10,LOW);
  digitalWrite (11,LOW);
  digitalWrite (12,LOW);
  digitalWrite (7,HIGH);
  digitalWrite (10,HIGH);
  delay (1000);
  digitalWrite (10,LOW);
  digitalWrite (12,HIGH);
  delay (4000);
  digitalWrite (12,LOW);
  digitalWrite (11,HIGH);
  delay (1000);
  digitalWrite (11,LOW);
  digitalWrite (10,HIGH);
  delay (1000);
  digitalWrite (7,LOW);
  digitalWrite (9,HIGH);
  delay (4000);
  digitalWrite (9,LOW);
  digitalWrite (8,HIGH);
  delay (1000);
  digitalWrite (8,LOW);
  digitalWrite (7,HIGH);  
  }
