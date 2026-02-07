#include <iostream>
#include <string>
using namespace std;

class Musicians {
protected:
    string stringIns[5];
    string windIns[5];
    string percussionIns[5];

public:
    void stringInstruments() {
        stringIns[0] = "Veena";
        stringIns[1] = "Guitar";
        stringIns[2] = "Sitar";
        stringIns[3] = "Sarod";
        stringIns[4] = "Mandolin";
    }

    void windInstruments() {
        windIns[0] = "Flute";
        windIns[1] = "Clarinet";
        windIns[2] = "Saxophone";
        windIns[3] = "Nadhaswaram";
        windIns[4] = "Piccolo";
    }

    void percussionInstruments() {
        percussionIns[0] = "Tabla";
        percussionIns[1] = "Mridangam";
        percussionIns[2] = "Bongos";
        percussionIns[3] = "Drums";
        percussionIns[4] = "Tambour";
    }

    void show(string arr[]) {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << endl;
        }
    }
};

class InsType : public Musicians {
    int choice;

public:
    void get() {
        cout << "\nType of instruments to be displayed\n";
        cout << "1. String instruments\n";
        cout << "2. Wind instruments\n";
        cout << "3. Percussion instruments\n";
        cout << "Enter your choice: ";
        cin >> choice;
    }

    void show() {
        switch (choice) {
        case 1:
            stringInstruments();
            cout << "\nString Instruments:\n";
            Musicians::show(stringIns);
            break;

        case 2:
            windInstruments();
            cout << "\nWind Instruments:\n";
            Musicians::show(windIns);
            break;

        case 3:
            percussionInstruments();
            cout << "\nPercussion Instruments:\n";
            Musicians::show(percussionIns);
            break;

        default:
            cout << "Invalid choice";
        }
    }
};

int main() {
    InsType obj;
    obj.get();
    obj.show();
    return 0;
}