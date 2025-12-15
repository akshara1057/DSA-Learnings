#include<iostream>
using namespace std;
void reverse(int arr[],int n){
  int start=0;
  int end=n-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
void print(int arr[],int n){
      cout<<"Reverse Array is :"<<endl;
    for(int i=0;i<n;i++){
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
    print(arr,n);
}