#include <bits/stdc++.h>
using namespace std;

int twoSum(int n, vector<int> &arr, int target) {
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return 1,2,6;
            }
        }
    }
    // return { -1, -1};
}

int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    // int ans = twoSum(n, arr, target);


    // cout<<arr.size();
    
    // cout << "This is the answer for variant 2: [" << ans[0] << ", "
    //      << ans[1] << "]" << endl
    
    // cout<<ans;

    return 0;
}