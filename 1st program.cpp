#include<iostream>
// 1. O(1) — Constant Time (array access)
#include<iostream>
using namespace std;

// int main(){
//     int arr[5]={1,2,4,5,9};
//     cout<<arr[2];
//     return 0;
// }

// // 2. O(n) — Linear Time (single loop)
// int main() {
//     int n = 5;
//     for (int i = 0; i < n; i++) {
//         cout << i << " ";
//     }
// }
// // 3. O(n²) — Quadratic Time (nested loop)
// int main() {
//     int n = 3;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // 4. O(log n) — Logarithmic Time (halving each step)
// int main() {
//     int n = 16;
//     while (n > 1) {
//         n = n / 2;
//         cout << n << " ";
//     }
// }

// // 5. O(n log n) — Linearithmic Time (merge-sort loop)
void func(int n) {
    for (int i = 1; i < n; i *= 2) {   
        for (int j = 0; j < n; j++) {  
            cout << "*";
        }
    }
}

int main() {
    func(8);
}

