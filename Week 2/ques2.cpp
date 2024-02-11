#include<iostream>
using namespace std;
void findindices(int [],int);
int main(){
    int a[10],n,check;
    cout<<"Enter the number of elements:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element:";
        cin>>a[i];
    }
    findindices(a,n);
    return 0;
}
void findindices(int arr[],int size){
    int k;
    int left=0;
    int right=size-1;
    for(int i=0;i<size;i++){    
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==arr[i]){
                k=i;
                break;
            }
            else if(sum<arr[i]){
                left++;
            }
            else{
                right--;
            }
        }
        cout<<"The indices i+j=k->"<<left<<"+"<<right<<"="<<k<<endl;
    }
}