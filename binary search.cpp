#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {

    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;  // not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int n = 5;

    cout << binarySearch(arr, n, 7);
}
