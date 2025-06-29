# Auto Water Dispenser Using Ultrasonic Sensor and Relay

This project is an automated water dispenser that uses an ultrasonic sensor to detect the presence of an object (like a hand or container) and activates a water pump via a relay when the object is within a certain distance.

---

## Features

- Automatically dispenses water when an object is detected nearby.
- Uses an ultrasonic sensor for non-contact distance measurement.
- Controls a water pump through a relay module.
- Real-time distance monitoring through serial output (optional).

---

## Components Required

- Arduino board (e.g., Arduino Uno)
- Ultrasonic sensor module (HC-SR04)
- Relay module
- Water pump
- Jumper wires
- External power supply for the water pump (as per pump specifications)

---

## Wiring Overview

- **Ultrasonic Sensor Trig Pin** connected to Arduino pin 10.
- **Ultrasonic Sensor Echo Pin** connected to Arduino pin 11.
- **Relay control pin** connected to Arduino pin 7.
- Water pump connected through the relay module.

> Make sure to power the water pump separately and ensure the relay is rated appropriately.

---

## How It Works

1. The ultrasonic sensor sends ultrasonic pulses and measures the time it takes for the echo to return.
2. The Arduino calculates the distance based on the echo time.
3. If the detected object is within a set distance (e.g., 15 cm), the Arduino activates the relay, turning the pump on.
4. When the object moves away, the relay switches off the pump.

---

## Usage

- Place the sensor so it faces the area where you want to detect the presence of a container or hand.
- Adjust the distance threshold in the code as needed for your setup.
- Monitor the serial output for distance readings (optional).

---

## Safety Notes

- Handle electrical components and water carefully to avoid hazards.
- Ensure the relay and power supply can safely handle the pump’s voltage and current requirements.
- Do not touch the pump or water during operation to avoid electric shock.

---

## Author

*Prasoon Kandel*

---

## License

This project is open source and free to use.
