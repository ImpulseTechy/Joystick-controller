void setup() {
  Serial.begin(9600);
}

void loop() {
  int xValue = analogRead(A0);  // Use the appropriate pin for the X-axis
  if (xValue < 100) {
    // Trigger the jump action by sending 'J' character
    Serial.write('J');
    delay(100); // Adjust the delay as needed
  }
}
