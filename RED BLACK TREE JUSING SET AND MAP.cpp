//#include <iostream>
//#include <set>
//using namespace std;
//
//int main() {
//
//    set<int> s;
//
//    s.insert(50);
//    s.insert(40);
//    s.insert(35);
//    s.insert(60);
//    s.insert(70);
//    s.insert(65);
//    s.insert(45);
//    s.insert(43);
//
//    cout << "Set elements (Sorted): ";
//    for(int x : s)
//        cout << x << " ";
//
//    return 0;
//}
//
#include <iostream>
#include <map>
using namespace std;

int main() {

    map<int,string> m;

    m[50] = "A";
    m[40] = "B";
    m[35] = "C";
    m[60] = "D";

    cout << "Map elements:\n";

    for(auto p : m)
        cout << p.first << " -> " << p.second << endl;

    return 0;
}
