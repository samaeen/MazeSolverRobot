/*code for motor test in L298 motor driver
 * Creeated by
 * Sama-E-Shan
 */
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop()
{
  //right motor
  analogWrite(2, 120);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  //left motor
  analogWrite(5, 120);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
}
