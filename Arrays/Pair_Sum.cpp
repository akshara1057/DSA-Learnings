/*
Problem:
Find all pairs in the array whose sum is equal to S.

Source:Coding Ninja

Approach:
- Use two nested loops to check all pairs
- If sum matches S, store pair in sorted order
- Sort the final list of pairs

Time Complexity: O(N^2)
Space Complexity: O(K)
*/


vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> ans;

    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}