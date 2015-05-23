  const int c1 = 2;
  const int c2 = 3;
  const int c3 = 4;
  const int c4 = 5;
  const int c5 = 6;
  const int c6 = 7;
  const int c7 = 8;
  const int c8 = 9;
  const int c9 = 10                                                                                                                                                                                               ;
  const int t1 = 11;
  const int t2 = 12;
  const int t3 = 13;
  
  void setup() {
  pinMode (c1, OUTPUT);
  pinMode (c2, OUTPUT);
  pinMode (c3, OUTPUT);
  pinMode (c4, OUTPUT);
  pinMode (c5, OUTPUT);
  pinMode (c6, OUTPUT);
  pinMode (c7, OUTPUT);
  pinMode (c8, OUTPUT);
  pinMode (c9, OUTPUT);
  pinMode (t1, OUTPUT);
  pinMode (t2, OUTPUT);
  pinMode (t3, OUTPUT);
}

  void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite (t1,HIGH);
  digitalWrite (t2,HIGH);
  digitalWrite (t3,HIGH);
  digitalWrite (c1,HIGH);
  delay (250);
  digitalWrite (c2,HIGH);
  delay (250);
  digitalWrite (c3,HIGH);
  delay (250);
  digitalWrite (c1,LOW);
  digitalWrite (c6,HIGH);
  delay (250);
  digitalWrite (c2,LOW);
  digitalWrite (c9,HIGH);
  delay (250);
  digitalWrite (c3,LOW);
  digitalWrite (c8,HIGH);
  delay (250);
  digitalWrite (c4,LOW);
  digitalWrite (c7,HIGH);
  delay (250);
  digitalWrite (c9,LOW);
  digitalWrite (c4,HIGH);
  delay (250);
  digitalWrite (c8,LOW);
  digitalWrite (c5,HIGH);
  delay (250);
  digitalWrite (c7,LOW);
  delay (250);
  digitalWrite (c4,LOW);
  delay (250);
  digitalWrite (c5,LOW);
  delay (250);
  
}
