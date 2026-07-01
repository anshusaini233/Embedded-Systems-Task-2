// ESP32 + LDR Sensor Module

const int ldrPin = 34;     // AO pin of LDR module
const int ledPin = 2;      // LED connected to GPIO2

const int threshold = 2000; // Adjust after observing sensor values

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);

  Serial.println("Automatic Light Control System");
}

void loop() {

  // Read light intensity
  int lightValue = analogRead(ldrPin);

  // Display on Serial Monitor
  Serial.print("Light Value: ");
  Serial.println(lightValue);

  // Trigger action when threshold passes
  if (lightValue < threshold) {

    digitalWrite(ledPin, HIGH);

    Serial.println("Status: DARK");
    Serial.println("LED: ON");

  } else {

    digitalWrite(ledPin, LOW);

    Serial.println("Status: BRIGHT");
    Serial.println("LED: OFF");

  }

  Serial.println("-------------------------");

  delay(1000);
}
