#include <iostream>
#include <stack>
using namespace std;

class Queue{
    stack<int> s1, s2;

public:
    void insert(int val){
        s1.push(val);
    }

    int deleteRequest(){
        if(s1.empty() && s2.empty()){
            cout << "Queue Underflow!" << endl;
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int request = s2.top();
        s2.pop();

        return request;
    }
};

int main(){
    Queue q;
    q.insert(10);
    q.insert(20);
    q.insert(30);

    cout << "Deleted Request : " << q.deleteRequest() << endl;
    cout << "Deleted Request : " << q.deleteRequest() << endl;

    q.insert(40);

    cout << "Deleted Request : " << q.deleteRequest() << endl;

    return 0;
}