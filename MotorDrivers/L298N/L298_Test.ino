#define ENA 3
#define ENB 5
#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 10


char ch;

void setup() {

  //setting pinModes
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  //initializing everything to LOW
  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);

  Serial.begin(9600);
}

void loop() {

  if (Serial.available()) {
    ch = Serial.read();

   if ( ch == 'A' ) {
      digitalWrite(ENA, HIGH);
   } else if ( ch == 'B' )  {
      digitalWrite(ENB, HIGH);
   } else if ( ch == 'a' )  {
      digitalWrite(ENA, LOW);
   } else if ( ch == 'b' )  {
      digitalWrite(ENB, LOW);

   } else if ( ch == '1' )  {
      digitalWrite(IN1, HIGH);
   } else if ( ch == '2' )  {
      digitalWrite(IN2, HIGH);
   } else if ( ch == '3' )  {
      digitalWrite(IN3, HIGH);
   } else if ( ch == '4' )  {
      digitalWrite(IN4, HIGH);

   } else if ( ch == 'q' )  {
      digitalWrite(IN1, LOW);
   } else if ( ch == 'w' )  {
      digitalWrite(IN2, LOW);
   } else if ( ch == 'e' )  {
      digitalWrite(IN3, LOW);
   } else if ( ch == 'r' )  {
      digitalWrite(IN4, LOW);
   }

   Serial.print(digitalRead(ENA)); Serial.print(" ");
   Serial.print(digitalRead(ENB)); Serial.print(" ");
   Serial.print(digitalRead(IN1)); Serial.print(" ");
   Serial.print(digitalRead(IN2)); Serial.print(" ");
   Serial.print(digitalRead(IN3)); Serial.print(" ");
   Serial.print(digitalRead(IN4)); Serial.print(" ");
   Serial.println(" ");

  }

  delay(200);
}

