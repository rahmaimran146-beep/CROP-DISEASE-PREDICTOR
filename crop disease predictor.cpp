//CROP DISEASE PREDICTOR
#include <iostream>
#include <string>
using namespace std;

//  Queue for Images 
class ImageQueue {
public:
    static const int MAX = 10;
    string images[MAX];
    int front, rear;

    ImageQueue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return rear == MAX - 1;
    }

    bool isEmpty() {
        return front == -1;
    }

    void enqueue(string img) {
        if (isFull()) {
            cout << "Queue is full. Cannot add image.\n";
            return;
        }
        if (front == -1) front = 0;
        images[++rear] = img;
        cout << img << " added to queue.\n";
    }

    string dequeue() {
        if (isEmpty()) {
            cout << "Queue empty.\n";
            return "";
        }
        string val = images[front];
        if (front == rear) front = rear = -1;
        else front++;
        return val;
    }
};

//  Linked List for Features 
class FeatureNode {
public:
    int colorValue;      
    int spotDensity;     
    FeatureNode* next;

    FeatureNode(int c, int s) {
        colorValue = c;
        spotDensity = s;
        next = NULL;
    }
};

class FeatureList {
public:
    FeatureNode* head;

    FeatureList() {
        head = NULL;
    }

    void addFeature(int c, int s) {
        FeatureNode* newNode = new FeatureNode(c, s);
        if (head == NULL) {
            head = newNode;
        } else {
            FeatureNode* temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
        cout << "Features added (color=" << c << ", spots=" << s << ")\n";
    }
};

//  Stack for Prediction History 
class PredictionStack {
public:
    string arr[20];
    int top;

    PredictionStack() {
        top = -1;
    }

    void push(string disease) {
        if (top == 19) {
            cout << "History Full.\n";
            return;
        }
        arr[++top] = disease;
    }

    void showHistory() {
        if (top == -1) {
            cout << "No history.\n";
            return;
        }
        cout << "\n--- Prediction History ---\n";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
    }
};

// Disease Prediction Logic 
string predictDisease(int color, int spots) {
    if (color < 50 && spots > 70)
        return "Severe Leaf Blight";
    else if (color < 80 && spots > 40)
        return "Fungal Infection";
    else if (color > 80 && spots < 20)
        return "Healthy Leaf";
    else
        return "Mild Disease";
}

// Main Program 
int main() {
    ImageQueue q;
    FeatureList fl;
    PredictionStack history;

    int choice;
    
    while (true) {
        cout << "\n===== Crop Disease Predictor =====\n";
        cout << "1. Add Leaf Image to Queue\n";
        cout << "2. Process Next Image (Extract Features)\n";
        cout << "3. Predict Disease\n";
        cout << "4. Show Prediction History\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string name;
            cout << "Enter Image Name: ";
            cin >> name;
            q.enqueue(name);
        }

        else if (choice == 2) {
            string img = q.dequeue();
            if (img != "") {
                int colorVal, spots;
                cout << "Extracted features for " << img << endl;
                cout << "Enter color value (0–100): ";
                cin >> colorVal;
                cout << "Enter spot density (0–100): ";
                cin >> spots;
                fl.addFeature(colorVal, spots);
            }
        }

        else if (choice == 3) {
            if (fl.head == NULL) {
                cout << "No features available.\n";
                continue;
            }

            FeatureNode* temp = fl.head;
            while (temp->next != NULL)
                temp = temp->next;

            string result = predictDisease(temp->colorValue, temp->spotDensity);
            cout << "\nPredicted Disease: " << result << endl;

            history.push(result);
        }

        else if (choice == 4) {
            history.showHistory();
        }

        else if (choice == 5) {
            break;
        }

        else {
            cout << "Invalid Choice\n";
        }
    }

    return 0;
}


