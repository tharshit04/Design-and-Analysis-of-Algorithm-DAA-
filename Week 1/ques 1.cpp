#include<iostream>
using namespace std;
int main(){
    int a[10],n,key,comparison,check=0,choice=0;
    cout<<"Enter the number of elements to input:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element:";
        cin>>a[i];
    }
    do{
        cout<<"Enter the number to search:";
        cin>>key;
        for(int i=0;i<n;i++){
            comparison=i+1;
            if(key==a[i]){
                check++;
                break;
            }
        }
        if(check==1){
        cout<<"Present "<<comparison<<endl;
        } 
        else{
            cout<<"Not Present "<<comparison<<endl;
        }
        cout<<"continue/exit-> 0/1:";
        cin>>choice;
        if(choice==1){
            cout<<"Exiting the program";
            choice++;
        }
    }while(choice==0);
    
    return 0;
}