#define batteryPin A0
#define fullLED 7

float batteryVoltage;
float actualVoltage;

void setup() {
  Serial.begin(9600);
  pinMode(fullLED, OUTPUT);
}

void loop() {

  batteryVoltage = analogRead(batteryPin);
  
  // Convert ADC value to actual battery voltage
  actualVoltage = (batteryVoltage * 5.0 / 1023.0) * 2;

  Serial.print("Battery Voltage: ");
  Serial.println(actualVoltage);

  // 9V battery full threshold
  if (actualVoltage >= 8.5) {
    digitalWrite(fullLED, HIGH);   // Battery Full
  } 
  else {
    digitalWrite(fullLED, LOW);    // Battery Not Full
  }

  delay(1000);
}