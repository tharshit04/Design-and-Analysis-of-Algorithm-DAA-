#include <iostream>
using namespace std;
int findLeftmostIndex(int [],int,int);
int findRightmostIndex(int [],int,int);
int countOccurrences(int arr[],int size, int key) {
    int leftIndex = findLeftmostIndex(arr,size, key);
    if (leftIndex == -1)
        return 0;

    int rightIndex = findRightmostIndex(arr,size,key);
    int occurrences = rightIndex - leftIndex + 1;
    return occurrences;
}

int findLeftmostIndex(int arr[],int size, int key) {
    int low = 0;
    int high =  - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            result = mid;
            high = mid - 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int findRightmostIndex(int arr[],int size, int key) {
    int low = 0;
    int high = size - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            result = mid;
            low = mid + 1;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[10],n,key;
    cout<<"Enter the size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element in array:";
        cin>>arr[i];
    }
    cout<<"Enter the key:";
    cin>>key;
    int occurrences = countOccurrences(arr,n,key);

    cout << "Number of copies of " << key << " is: " << occurrences << endl;

    return 0;
}