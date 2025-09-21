void setup() {
  pinMode(gpioOut, OUTPUT);
  Serial.begin(115200);//Initialize serial port
  while (!Serial){
    ;// wait for serial port to connect.
  }
}

void loop() {
  digitalWrite(gpioOut, LOW);
  delay(1000);
  digitalWrite(gpioOut, HIGH);
  delay(1000);
  digitalWrite(gpioOut, LOW);
  delay(1000);
  digitalWrite(gpioOut, HIGH);
  delay(1000);
  digitalWrite(gpioOut, LOW);
  delay(1000);
  digitalWrite(gpioOut, HIGH);
  delay(1000);
  digitalWrite(gpioOut, LOW);
  delay(1000);
  digitalWrite(gpioOut, HIGH);
  delay(1000);
  digitalWrite(gpioOut, LOW);
  delay(1000);
  digitalWrite(gpioOut, HIGH);
  delay(1000);
  while(1); {
  }
}
