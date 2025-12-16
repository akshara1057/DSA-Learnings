/*
Problem:
Given two sorted arrays arr1 and arr2 in ascending order.
Find their intersection.

Source: Coding Ninja

Approach:
Use two pointers since arrays are sorted.
- If elements are equal, add to answer and move both pointers
- If arr1[i] < arr2[j], move i
- Else move j

Time Complexity: O(n + m)
Space Complexity: O(k)
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n,
                                  vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            i++;
        }
        else {
            j++;
        }
    }
    return ans;
}
