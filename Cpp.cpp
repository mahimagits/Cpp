#include <iostream>
using namespace std;

//ENUM
// enum Weekday {
//     Sunday,
//     Monday,
//     Tuesday,
//     Wednesday,
//     Thursday,
//     Friday,
//     Saturday
// };

// int main() {
//     Weekday today;

//     today = Wednesday;

//     cout << "Value of today(Wednesday): " << today;
//     return 0;
// }



//STRUCTURE
// struct Student {
//     int rollNo;
//     char name[20];
//     float marks;
// };

// int main() {
//     Student s1 = {38, "Mahima", 98};


//     cout << "Roll Number: " << s1.rollNo << endl;
//     cout << "Name: " << s1.name << endl;
//     cout << "Marks: " << s1.marks << endl;

//     return 0;
// }



//UNION
// union Payment {
//     int cash;
//     long card;
//     char upi[20];
// };

// int main() {
//     Payment p;

//     p.cash = 500;
//     cout << "Payment by Cash: " << p.cash << endl;

//     p.card = 12345678;   // overwrites cash
//     cout << "Payment by Card: " << p.card << endl;

//     return 0;
// }


//TypeDef
// typedef int marks;

// int main() {
//     marks m = 85;

//     cout << "Marks: " << m;
//     return 0;
// }



//Triangle Pattern
int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
