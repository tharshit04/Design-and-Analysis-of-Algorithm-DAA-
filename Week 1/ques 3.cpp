#include <iostream>
using namespace std;

int linearSearch(int arr[], int start, int end, int key) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int i, n, key,x;
    cout<<"Enter the number of iteratons:"<<endl;
    cin>>x;
    for(i=1;i<=x;i++)
    {
    cout << "Enter the size of array" << endl;
    cin >> n;

    int arr[n];

    
    for (i = 0; i < n; i++) {
        cout << "enter the "<<i+1<<" element :"<< endl;
        cin >> arr[i];
    }

    cout << "Enter key" << endl;
    cin >> key;

    if (arr[0] == key) {
        cout << "Present at index 0" << endl;
        return 0;
    }

    i = 1;
    while (i < n && arr[i] <= key) {
        i = i * 2;
    }

    int result = linearSearch(arr, i / 2, min(n - 1, i), key);

    if (result != -1) {
        cout << "Present at index " << result << endl;
    } else {
        cout << "Not Present" << endl;
    }
    }
    return 0;
}