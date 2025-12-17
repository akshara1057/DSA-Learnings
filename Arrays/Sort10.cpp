#include<iostream>
#include<algorithm>
using namespace std;
void Sort10(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==1){
            i++;
        }
        else if(arr[j]==0){
            j--;
        }
        if(arr[i]==0 && arr[j]==1){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    }
void print(int arr[],int n){
      cout<<"Sorted array is :"<<endl;
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
    Sort10(arr,n);
    print(arr,n);
}