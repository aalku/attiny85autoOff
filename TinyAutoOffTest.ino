unsigned long t0;

int ledPin = 4;
int powerPin = A3;

void setup() {
  pinMode(ledPin, OUTPUT); // Read test LED
  digitalWrite(ledPin, LOW); // LED OFF
  pinMode(powerPin, INPUT); // Pin as input
  digitalWrite(powerPin, HIGH); // KEEP ON with internal pullup resistor
  t0 = millis(); // Boot time, always 0
}

void loop() {
  delay(5); // Or something
  if (millis() - t0 > 5000) { // Turn off after 5s
    // Blink
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);

    // Power off
    pinMode(powerPin, OUTPUT); // Full output, not only pull up/down resistor
    digitalWrite(powerPin, LOW); // Turn the whole thing off
    delay(5000);
  }
  digitalWrite(ledPin, analogRead(powerPin) > 1024*2/3); // Turn on led if A3 is > 2/3 of VCC
}
