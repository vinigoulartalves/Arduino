// C++ code
//
int luminosidade = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  luminosidade = analogRead(A0);
  if (luminosidade < 100) {
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
  }
  Serial.println(luminosidade);
  delay(10); // Wait for 10 millisecond(s)
}
