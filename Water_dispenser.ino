// Auto water dispenser using ultrasonic sensor and relay and arduino uno

long duration;
float distance;

const int trig_pin = 10;
const int echo_pin = 11;
const int relay_pin = 7;  // Relay control pin D7

void setup() {
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(relay_pin, OUTPUT);
  digitalWrite(relay_pin, LOW); 

  Serial.begin(115200);
}

void loop() {
  // Trigger ultrasonic pulse
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  // Read echo time
  duration = pulseIn(echo_pin, HIGH);  (max ~5m)

  if (duration == 0) {
    Serial.println("No echo received");
  } else {
    distance = duration * 0.034 / 2;
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    // If object is within 30cm, turn on pump
    if (distance <= 15) {
      digitalWrite(relay_pin, LOW);  // Pump ON
    } else {
      digitalWrite(relay_pin, HIGH);   // Pump OFF
    }
  }

  delay(500); 
}
