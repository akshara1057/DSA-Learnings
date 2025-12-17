/*
Problem:
Given an array containing only 0s, 1s, and 2s, sort the array in ascending order using only single iteration
The array may contain any number of 0s, 1s, and 2s.

Source: Coding Ninjas (Practice Problem)

Approach (Counting Method):
1. Count the number of 0s, 1s, and 2s in the array.
2. Overwrite the array in order:
   - First fill all 0s
   - Then fill all 1s
   - Then fill all 2s
This sorts the array in a single pass over counts.

Time Complexity: O(N)
Space Complexity: O(1)
*/

#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n) {  
int count0 = 0, count1 = 0, count2 = 0;

for(int i = 0; i < n; i++) {    
  if(arr[i] == 0){
     count0++;
   }
  else if(arr[i] == 1){
     count1++;
   }
   else 
     count2++;
 } 
int i = 0;
for(int j = 0; j < count0; j++)
arr[i++] = 0; 
for(int j = 0; j < count1; j++)
 arr[i++] = 1;
for(int j = 0; j < count2; j++) 
arr[i++] = 2; 
}