#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);

    cout << "Front: " << dq.front() << endl; // 5
    cout << "Back: " << dq.back() << endl;   // 20

    dq.pop_front();
    dq.pop_back();
	cout<<dq[0]<<endl;
	for(int i =0; i<dq.size();i++){
		cout<<dq[i]<<" ";
	}
    cout << "Front after pop: " << dq.front();

    return 0;
}
