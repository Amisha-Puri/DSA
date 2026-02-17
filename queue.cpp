#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.size()<<endl;
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    q.pop();
    cout << "After pop, Front: " << q.front() << endl;
    cout<<"size of queue after pop: "<<q.size()<<endl;
    if(q.empty())
        cout << "Queue is empty";
    else
        cout << "Queue is not empty";

    return 0;
}
