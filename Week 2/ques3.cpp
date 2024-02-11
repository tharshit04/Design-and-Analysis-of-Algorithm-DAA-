#include<iostream>
using namespace std;
void dif(int [],int);
int main(){
    int a[10],n;
    cout<<"Enter the size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element:";
        cin>>a[i];
    }
    dif(a,n);
    return 0;
}
void dif(int arr[],int size){
    int key;
    cout<<"Enter the key:";
    cin>>key;
    for(int i=0;i<size;i++){
        for(int j=size-1;j>0;j--){
            if(arr[j]-arr[i]==key){
                cout<<"The number are "<<j<<"-"<<i<<"="<<key<<endl;
                break;
            }
        }
    }
}