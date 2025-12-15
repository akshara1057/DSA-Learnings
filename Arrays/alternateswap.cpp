#include<iostream>
using namespace std;
void alternateswap(int arr[],int n){
    for(int i=0;i+1<n;i=i+2){
        swap(arr[i],arr[i+1]);
    }
}
void printArray(int arr[],int n){
    cout<<"After alternate Swapping"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,3,5,7,9};
    alternateswap(arr,5);
    printArray(arr,5);
}

// Use i+1 < n to avoid out-of-bounds access for odd-sized arrays.
