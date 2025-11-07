# EE 201 – Computer Hardware Skills  
**University of Washington | Autumn 2023**  
Instructor: Prof. Swetak Patel  

---

## 🧠 Overview
This repository contains all my completed projects and lab exercises from **EE 201: Computer Hardware Skills**, a hands-on course combining **circuit design**, **mechanical modeling**, and **embedded programming**.

Each branch in this repository represents one lab from the course:
- `PCB_Design` → PCB design of a 555 Timer Oscillator using **KiCad**
- `FreeCad` → 3D mechanical enclosure design for the PCB using **FreeCAD**
- `Arduino` → Digital and analog circuit programming with **Arduino Uno**
- `Arduometer` → Bonus exercise involving sensor and meter integration
- `aboutMe` → Personal Git/GitHub setup and practice assignment  

The projects progress from **electronic design** → **3D fabrication** → **embedded systems**, providing a full hardware development workflow.

---

## 🧩 Labs and Branch Descriptions

### 🔹 **Lab 2: PCB Design – 555 Timer Oscillator**
Branch: [`PCB_Design`](../../tree/PCB_Design)

Designed and routed a 555-timer astable oscillator circuit in **KiCad**, generating Gerber and drill files for manufacturing.  
Included labeled footprints, ground planes, and silkscreen name tag.

**Highlights**
- Schematic capture & PCB layout
- 2-layer routing and DRC/ERC checks
- Gerber file generation for fabrication
- 3D PCB visualization  

**Tools:** KiCad 7  
**Key Concepts:** RC timing, 555 astable operation, PCB design workflow  

---

### 🔹 **Lab 3: 3D Modeling – PCB Enclosure**
Branch: [`FreeCad`](../../tree/FreeCad)

Created a **60×60 mm** 3D-printed enclosure in **FreeCAD** to house the timer PCB.  
Included mounting holes, top cover design, and a connector pocket.

**Highlights**
- Modeled enclosure based on PCB dimensions
- Added holes and connector pocket
- Exported STEP file for 3D printing  

**Tools:** FreeCAD, Fusion 360 (for validation)  
**Key Concepts:** Parametric design, mechanical tolerances, CAD-to-fabrication pipeline  

---

### 🔹 **Lab 4: Arduino Exercises – Digital I/O and PWM**
Branch: [`Arduino`](../../tree/Arduino)

Programmed a series of Arduino circuits to explore digital input/output, PWM, and serial communication.

**Exercises**
- LED blink (timing control)
- Two-LED alternating blink
- Switch-controlled serial output (“Hello World!” / “It’s 2023”)
- 7-Segment countdown display (9→0)
- Potentiometer-based LED brightness control with analog voltage readout  

**Tools:** Arduino IDE, Uno R3 Board  
**Key Concepts:** PWM, digitalRead/write, serial I/O, resistive sensing  

---

### 🔹 **Extra Project: Arduometer**
Branch: [`Arduometer`](../../tree/Arduometer)

An optional Arduino exercise involving analog sensor reading and visualization.  
Demonstrates multi-sensor integration and serial plotting.

---

## 🛠 Skills Demonstrated
- **Circuit Design & Simulation:** KiCad schematic capture, routing, ERC/DRC verification  
- **3D CAD Modeling:** FreeCAD enclosure design, STEP export for fabrication  
- **Embedded Programming:** Arduino IDE, PWM, ADC, and I/O control  
- **Hardware Documentation:** Organized project folders, Git version control  
- **Cross-Disciplinary Integration:** Combined electrical, mechanical, and firmware design  

---

## 📜 Repository Structure

| Branch | Description |
|:--------|:-------------|
| `main` | Overview and documentation (this README) |
| `PCB_Design` | KiCad project files and PCB Gerbers |
| `FreeCad` | FreeCAD models and STEP enclosure |
| `Arduino` | Arduino sketches and wiring exercises |
| `Arduometer` | Bonus Arduino project |
| `aboutMe` | Initial GitHub setup practice |

---

## 📷 Example Media
| PCB Layout | 3D Enclosure | Arduino Circuit |
|-------------|--------------|----------------|
| ![](images/pcb_layout.png) | ![](images/enclosure_model.png) | ![](images/arduino_setup.png) |

*(You can add screenshots or renders in the `images/` folder once you upload them.)*

---

## 📄 License
MIT License – for educational and reference use.  

---


