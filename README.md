# Simulation-of-Microgravity-for-Plant-Growth-using-Arduino-based-Clinostat


## 📖 Overview
This project presents the design and implementation of a single-axis clinostat using Arduino to simulate microgravity conditions on Earth. The system is used to study plant growth behavior by minimizing the directional influence of gravity.

---

## 🎯 Objective
To analyze plant growth under simulated microgravity conditions by comparing germination and root orientation between rotating and stationary samples.

---

## ⚙️ Components Used
- Arduino Uno  
- Servo Motor
- Potentiometer
- Power Supply  
- Breadboard and connecting wires  
- Petri dishes  
- Seeds (cress seeds)  
- Mechanical support structure  

---

## 🧠 Working Principle
A clinostat works by continuously rotating a sample along a horizontal axis, averaging the gravitational vector over time and reducing directional growth signals in plants.

In this system, a potentiometer is used to control the rotational speed of the motor. The Arduino reads the analog input from the potentiometer and adjusts the motor speed accordingly, allowing controlled simulation of microgravity conditions.

---

## 🔬 Methodology
1. Seeds were placed in petri dishes under controlled conditions  
2. One set was mounted on the rotating clinostat platform  
3. Another set was kept stationary as a control sample  
4. The system was operated continuously at a constant speed  
5. Observations were made on germination and growth direction  

---

## 🛠️ My Contribution
- Performed hardware setup and component integration  
- Connected Arduino, motor, and power supply components  
- Assembled the mechanical structure of the clinostat  
- Assisted in conducting experiments and observations  

---

## 📊 Results and Observations
- Seeds under rotation showed variation in root orientation  
- Reduced directional growth compared to stationary samples  
- Demonstrated the effect of gravity on plant growth behavior  

---

## 💻 Code
The Arduino code used in this project controls the rotation of the servo motor to ensure continuous and stable motion of the clinostat.

File: `clinostat.ino`

---

## 💻 Code Description
The Arduino program is used to control the servo motor at a constant speed. Continuous rotation ensures uniform distribution of the gravitational vector over time.

Basic functionality includes:
- Initializing the servo motor  
- Controlling rotational motion  
- Maintaining continuous operation using loop logic  

---

## ⚠️ Note
The base code for motor control was adapted from reference material and implemented as part of this project.

---

## 🚀 Applications
- Space biology and plant growth research  
- Study of plant behavior in microgravity environments  
- Educational and experimental research setups  

---

## 📚 Key Learnings
- Basics of Arduino-based system integration  
- Understanding of motor-driven mechanical systems  
- Knowledge of microgravity simulation concepts  
- Hands-on experience in experimental setup  

---

## 📷 Project Setup
<img width="222" height="280" alt="Screenshot (197)" src="https://github.com/user-attachments/assets/8392d014-22f0-40f4-a740-71821a274627" />
<img width="476" height="289" alt="Screenshot (197)" src="https://github.com/user-attachments/assets/c4344493-dcde-4e95-9a54-4a0d3417694a" />


---

## 📚 References
- Science Buddies: Growing Plants in Microgravity using Arduino Clinostat  
  https://www.sciencebuddies.org/science-fair-projects/project-ideas/PlantBio_p054/plant-biology/plants-grow-microgravity-arduino-clinostat  

- NASA – Plant Growth in Microgravity  
  https://www.nasa.gov  

- Arduino Official Documentation  
  https://www.arduino.cc  

---

## 🧑‍💻 Author
G.Nohitha Navya Sri - Final Year B.Tech ECE Student
