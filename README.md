# 🚀 Gyroscope LED Flow with Arduino

![Arduino](https://img.shields.io/badge/Arduino-Uno-00979D?logo=arduino\&logoColor=white)
![MPU6050](https://img.shields.io/badge/Sensor-MPU6050-blue)
![STEM](https://img.shields.io/badge/STEM-Robotics-success)
![License](https://img.shields.io/badge/License-MIT-yellow)

An interactive Arduino project that uses an **MPU6050 Gyroscope/Accelerometer Sensor** to create a smooth LED flow animation based on the tilt angle of the board.

As the board tilts, **3 Red LEDs** and **3 Blue LEDs** illuminate sequentially, creating a visually appealing motion effect. Tilting the board in the opposite direction reverses the animation.

---

##  Project Overview

###  Features

*  3 Red LEDs
*  3 Blue LEDs
*  Real-Time Tilt Detection
*  Smooth LED Flow Animation
*  Arduino Uno / Nano Compatible
* 
 Perfect for STEM & Robotics Education
*  Beginner Friendly

---

## 🛠 Components

| Component                | Quantity    |
| ------------------------ | ----------- |
| Arduino Uno / Nano       | 1           |
| MPU6050 Gyroscope Sensor | 1           |
| Red LEDs                 | 3           |
| Blue LEDs                | 3           |
| 220Ω Resistors           | 6           |
| Breadboard               | 1           |
| Jumper Wires             | As Required |
| USB Cable                | 1           |

---

## 🔌 Wiring Diagram

### MPU6050 Connections

| MPU6050 | Arduino |
| ------- | ------- |
| VCC     | 5V      |
| GND     | GND     |
| SDA     | A4      |
| SCL     | A5      |

### LED Connections

| LED        | Arduino Pin |
| ---------- | ----------- |
| Red LED 1  | D2          |
| Red LED 2  | D3          |
| Red LED 3  | D4          |
| Blue LED 1 | D5          |
| Blue LED 2 | D6          |
| Blue LED 3 | D7          |

> Connect each LED through a **220Ω resistor** and connect all cathodes to **GND**.

---

## ⚙️ How It Works

The MPU6050 continuously measures the tilt angle of the board.

### Tilt Right

```
🔴 ⚪ ⚪ 🔵 ⚪ ⚪
🔴 🔴 ⚪ 🔵 ⚪ ⚪
🔴 🔴 🔴 🔵 ⚪ ⚪
🔴 🔴 🔴 🔵 🔵 ⚪
🔴 🔴 🔴 🔵 🔵 🔵
```

### Tilt Left

```
🔴 🔴 🔴 🔵 🔵 🔵
🔴 🔴 ⚪ 🔵 🔵 🔵
🔴 ⚪ ⚪ 🔵 🔵 🔵
⚪ ⚪ ⚪ 🔵 🔵 🔵
```

The LEDs create a smooth flowing animation according to the direction and amount of tilt.

---

## 📂 Project Structure

```
Gyroscope-LED-Flow/
│
├── GyroLEDFlow.ino
├── README.md
├── LICENSE
├── images/
│   ├── circuit_diagram.png
│   ├── project_photo.jpg
│   └── demo.gif
└── docs/
    └── wiring.pdf
```

---

##  Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/yourusername/Gyroscope-LED-Flow.git
```

### 2. Open Arduino IDE

Open the **GyroLEDFlow.ino** file.

### 3. Install Required Libraries

* Wire.h
* MPU6050 Library

### 4. Upload the Code

Select your Arduino board and upload the sketch.

### 5. Enjoy!

Tilt the board and watch the LEDs create a smooth flowing animation.

---

## Applications

* STEM Education
* Robotics Projects
* Arduino Learning
* Electronics Demonstrations
* Sensor Experiments
* Interactive Installations

---

##  Libraries

* Wire.h
* MPU6050

---

##  Future Improvements

* RGB LED Version
* NeoPixel Animation
* OLED Angle Display
* Sound Effects
* Bluetooth Control
* Wi-Fi Monitoring
* Adjustable Sensitivity

---

## Contributing

Contributions are welcome!

You can help by:

* Adding new LED animations
* Improving sensor accuracy
* Optimizing the code
* Updating the documentation
* Creating new project ideas

Feel free to fork this repository and submit a Pull Request.

---

##  Support

If you like this project:

 Star this repository

 Fork the project

 Share it with your friends

 Leave your feedback

---

##  About

Created for Arduino, Robotics, Electronics and STEM enthusiasts who enjoy building interactive projects and learning through hands-on experiments.

**Build • Learn • Create • Share**

---

## License

This project is released under the *MIT License**.

---

#  Thank You

Thank you for visiting this project!

If you enjoy Arduino, Robotics, Embedded Systems and STEM projects, don't forget to follow for more open-source creations.

**Happy Making! 
