Crop Disease Predictor 🌱

Crop Disease Predictor is a lightweight C++-based crop disease prediction system developed as a Data Structures project.
It processes crop leaf information and predicts possible diseases using basic feature analysis.

The project demonstrates the practical implementation of multiple data structures including Queue, Linked List, and Stack in a real-world agricultural application.

The system includes image queue management, feature extraction storage, disease prediction logic, and prediction history tracking.

Project Structure
CropDiseasePredictor/
├── src/
│   └── main.cpp
├── report/
│   └── ProjectReport.pdf
├── README.md
Features
Queue-based image processing system
Dynamic feature storage using Linked List
Prediction history management using Stack
Rule-based disease prediction logic
Console-based interactive interface
Efficient data management using data structures
Real-time user interaction through menu system
Data Structures Used
Queue

Used for managing crop leaf images in FIFO order.

Purpose
Store incoming leaf images
Process images sequentially
Linked List

Used for storing extracted image features dynamically.

Stored Features
Color Value
Spot Density
Stack

Used for storing prediction history.

Purpose
Maintain previous predictions
Display recent predictions first
Detection / Prediction Logic Overview

The system predicts diseases based on feature values entered by the user.

Prediction Conditions
Condition	Disease
color < 50 && spots > 70	Severe Leaf Blight
color < 80 && spots > 40	Fungal Infection
color > 80 && spots < 20	Healthy Leaf
Otherwise	Mild Disease
Workflow
Images are added into a queue
Features are extracted from the next image
Features are stored in a linked list
Disease prediction logic analyzes feature values
Prediction result is pushed into stack history
System Modules
Image Queue Module

Handles image insertion and removal using Queue operations.

Functions
enqueue()
dequeue()
isEmpty()
isFull()
Feature Extraction Module

Stores image feature values using Linked List nodes.

Features Stored
Color intensity
Spot density
Prediction History Module

Maintains disease prediction history using Stack operations.

Functions
push()
showHistory()
How to Run
Requirements
Any C++ compiler
Dev-C++
CodeBlocks
Visual Studio
VS Code
Steps
Open main.cpp in your C++ IDE
Compile the program
Run the executable
Use the menu options to:
Add images
Process images
Predict diseases
View history
Console Menu
===== Crop Disease Predictor =====

1. Add Leaf Image to Queue
2. Process Next Image (Extract Features)
3. Predict Disease
4. Show Prediction History
5. Exit
Future Improvements
Add GUI interface
Integrate real image processing
Add Machine Learning-based prediction
Save prediction records in files/database
Support multiple crop disease categories
Add image upload functionality
Technologies Used
C++
Object-Oriented Programming (OOP)
Queue
Linked List
Stack
Console-based Interface
Learning Outcomes

This project helped in understanding:

Real-world implementation of data structures
Queue operations in processing systems
Dynamic memory allocation using Linked Lists
Stack-based history management
Integration of multiple data structures in one application
Support

For issues or improvements, refer to the project documentation or modify the source code according to project requirements.
