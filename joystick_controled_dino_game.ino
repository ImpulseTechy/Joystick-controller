void setup() {
    Serial.begin(9600);
}

void loop() {
    int xValue = analogRead(A0); // Use the appropriate pin for the X-axis
    int yValue = analogRead(A1); // Use the appropriate pin for the Y-axis

    if (xValue < 100) {
        Serial.write('L'); // 'L' for left
        delay(100); // Adjust the delay as needed
    } else if (xValue > 900) {
        Serial.write('R'); // 'R' for right
        delay(100); // Adjust the delay as needed
    } else if (yValue < 100) {
        Serial.write('U'); // 'U' for up (jump)
        delay(100); // Adjust the delay as needed
    } else if (yValue > 900) {
        Serial.write('D'); // 'D' for down
        delay(100); // Adjust the delay as needed
    }
}
