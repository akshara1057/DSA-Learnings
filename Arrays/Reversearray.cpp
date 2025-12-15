#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    cout<<"Reverse Array is :"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n,i;
    cout<<"Enter Size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter"<<n<<"Elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
}