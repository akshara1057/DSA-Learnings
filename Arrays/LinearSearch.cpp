#include<iostream>
using namespace std;
bool linearsearch(int arr[], int n, int num){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==num)
        return true;
    }
    return false;
}
int main(){
    int i,size,num; 
    cout<<"enter size"<<endl;
    cin>>size;
    cout<<"Enter Elements"<<endl;
    int array[size];

    for(i=0;i<size;i++){
        cin>>array[i];
    }

    cout << "Enter element to search: ";
    cin >> num;

    bool isfound=linearsearch(array,size,num);
    if(isfound==true){
        cout<<"Element is found";
    }
    else
    cout<<"Element is not found";
}