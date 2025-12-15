/*
Problem:
Given an array where every element appears exactly twice
except one element that appears only once.
Find and return that unique element.

Source: Coding Ninjas (Practice Problem)

Approach:
Use XOR operation.
- a ^ a = 0
- a ^ 0 = a
All duplicate elements cancel out, leaving the unique element.

Time Complexity: O(N)
Space Complexity: O(1)
*/


#include <iostream>
using namespace std;
int findUnique(int *arr, int size){
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans ^= arr[i];
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unique element: " << findUnique(arr, n) << endl;
    return 0;
}
