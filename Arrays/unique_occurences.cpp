/*
Problem:
Given an integer array, return true if the frequency of each value is unique, 
otherwise return false.

Source: LeetCode (https://leetcode.com/problems/unique-number-of-occurrences)

Approach (Sorting + Frequency Vector):
1. Sort the array to bring identical elements together.
2. Count the frequency of each unique element and store in a vector.
3. Sort the frequency vector.
4. Check for duplicates in the frequency vector:
   - If any frequency repeats, return false
   - Otherwise, return true

Time Complexity: O(N log N)  // due to sorting
Space Complexity: O(N)       // for frequency vector
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Count frequencies of each unique element
        vector<int> freq;
        int count = 1;

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                freq.push_back(count);
                count = 1;
            }
        }
        freq.push_back(count);  // push count of the last element

        // Step 3: Sort the frequency vector
        sort(freq.begin(), freq.end());

        // Step 4: Check for duplicate frequencies
        for (int i = 1; i < freq.size(); i++) {
            if (freq[i] == freq[i - 1]) {
                return false;  // duplicate frequency found
            }
        }

        return true;  // all frequencies are unique
    }
};
