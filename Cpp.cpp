#include <iostream>
using namespace std;

class Parent {
    public:
        int a = 10;
    protected:
        int b = 20;
    private:
        int c = 30;
};

class Child : public Parent {
    public:
        void show () {
            cout << a << endl;
            cout << b << endl;
            // cout << c << endl; //private
        }
};

// class Child : protected Parent {
//     public:
//         void show(){
//             cout << a << endl;
//             cout << b << endl;
//         }
// };

// class Child : private Parent {
//     public:
//         void show(){
//             cout << a << endl;
//             cout << b << endl;
//         }
// };

int main() {
    Child obj;
    cout << obj.a << endl;
}