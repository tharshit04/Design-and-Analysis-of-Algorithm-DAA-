#include <iostream>
using namespace std;
int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n],result=-1;
    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the key element to search: ";
    cin >> key;
    int comparisons = 0;
    int low = 0;
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        comparisons=comparisons+1; 
        if (arr[mid] == key) {
            result=1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }
    if (result != -1) {
        cout << "Present " << comparisons<< endl;
    } else {
        cout << "Not Present " <<comparisons<< endl;
    }
    cout << "Total number of comparisons: " << comparisons << endl;
    return 0;
}
    
