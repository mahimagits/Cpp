#include <iostream>
using namespace std;

class Complex{
    public:
    int real, imag;

    Complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }
    Complex operator + (Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp; 
    }
};

// int main() {
//     Complex c1(2, 3), c2(4, 5);
//     Complex c3 = c1 + c2;

//     cout << c3.real << " + " << c3.imag << "i";
//     return 0;
// }

class Count{
    public:
        int value;

        Count(int v = 0){
            value = v;
        }

        void operator ++ () {
            value++;
        }
}; 

// int main() {
//     Count c(5);
//     ++c;

//     cout << c.value;
//     return 0;
// }

class Person {
    public:
        int age;

        Person(int a){
            age = a;
        }

        bool operator == (Person p) {
            return age == p.age;
        }
};

int main(){
    Person p1(20), p2(21);

    if (p1 == p2){
        cout << "Same Age";
    } else {
        cout << "Different Age";
    }
    return 0;
}

