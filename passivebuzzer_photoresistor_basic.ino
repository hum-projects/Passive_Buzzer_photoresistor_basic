int lightpin = A0;
int buzzpin = 8;
int lightval;
int delayt;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightpin,INPUT);
  pinMode(buzzpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightval = analogRead(lightpin);
  delayt = (9./300.)*lightval-(9.*600./300.)+1.;
  Serial.println(lightval);
  digitalWrite(buzzpin, HIGH);
  delay(delayt);
  digitalWrite(buzzpin, LOW);
  delay(delayt);
}
