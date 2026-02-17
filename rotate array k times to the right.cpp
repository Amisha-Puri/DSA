#include<iostream>
using namespace std;

void rotateArray(int arr[], int n, int k) {
    k = k % n;   // handle k > n

    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7, k = 3;

    rotateArray(arr, n, k);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
