/*
Problem:
Given an array of size N containing numbers from 1 to N-1.
One number is repeated once.
Find the duplicate element.

Approach:
Use XOR.
- XOR all array elements
- XOR numbers from 1 to N-1
- The remaining value is the duplicate

Time Complexity: O(N)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;
int findDuplicate(int arr[], int n) {
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans=ans^arr[i];
    }
    
    for(int i = 1; i <= n-1; i++) {
        ans=ans^i;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Duplicate element: " << findDuplicate(arr, n) << endl;
    return 0;
}
