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