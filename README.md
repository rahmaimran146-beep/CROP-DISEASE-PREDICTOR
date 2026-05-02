# 🌿 Crop Disease Predictor
Crop Disease Predictor is a lightweight console-based crop disease detection system developed as a Data Structures project. It allows users to add leaf images to a queue, extract features from each image, and predict the disease using a simple logic engine. All prediction results are stored in a history stack for review.
The project demonstrates real-world use of Queue, Linked List, and Stack in a practical agricultural scenario.
📂 Project Structure
crop-disease-predictor/
├── src/
│   └── crop_disease_predictor.cpp
└── README.md

# ✨ Features

🖼️ Add leaf images to a Queue for sequential processing
🔗 Extract and store image features (color value & spot density) using Linked List
🧠 Predict crop disease based on extracted feature values
🕓 Save and view full prediction history using a Stack
💻 Simple and clean console-based menu interface


# 🧠 Data Structures Used
Data StructurePurposeQueue (Array-based)Stores leaf images in order for sequential processing (FIFO) — max 10 imagesLinked ListDynamically stores extracted features (color value & spot density) for each imageStack (Array-based)Saves prediction results as history, displayed in reverse order (LIFO) — max 20 records

These structures enable efficient image processing and history management without heavy resource usage.


# 🔎 Detection Logic Overview
User Adds Leaf Image Name
        ↓
  [ Queue ] — stores images in order (FIFO)
        ↓
  Process Next Image → Enter Color Value & Spot Density
        ↓
  [ Linked List ] — stores extracted features dynamically
        ↓
  Disease Prediction Engine runs on latest features:
    • color < 50 && spots > 70  → Severe Leaf Blight
    • color < 80 && spots > 40  → Fungal Infection
    • color > 80 && spots < 20  → Healthy Leaf
    • Otherwise                 → Mild Disease
        ↓
  [ Stack ] — prediction result saved to history (LIFO)
        ↓
  🌿 Result Displayed to User

# 🖥️ Menu Options
===== Crop Disease Predictor =====
1. Add Leaf Image to Queue
2. Process Next Image (Extract Features)
3. Predict Disease
4. Show Prediction History
5. Exit

# 🚀 How to Run

Open the project in a C++ compiler (Visual Studio / Dev C++ / Code::Blocks recommended)
Compile and run crop_disease_predictor.cpp
Use the menu to:

Add a leaf image name to the queue
Process the image by entering color value and spot density
Predict the disease
View full prediction history

# Sample Run
Enter Image Name: leaf1.jpg
leaf1.jpg added to queue.

Extracted features for leaf1.jpg
Enter color value (0-100): 45
Enter spot density (0-100): 80
Features added (color=45, spots=80)

Predicted Disease: Severe Leaf Blight

--- Prediction History ---
Severe Leaf Blight

🔮 Future Improvements

 Image file reading and automatic feature extraction
 Machine learning based prediction model
 Support for multiple crop types
 Web or mobile interface
 Export prediction history to file
 Disease treatment suggestions

# 🛠️ Technologies Used

Language: C++
Concepts: Data Structures (Queue, Linked List, Stack)
Interface: Console-based Menu
Domain: Agriculture / Data Structures
Type: Academic / Course Project


# ⚠️ Support

This system is designed for presentation and demonstration purposes.
Feature values (color and spot density) are entered manually for simulation.
For production use, real image processing and a trained model are recommended.


# 📄 License
This project is for educational purposes only.

