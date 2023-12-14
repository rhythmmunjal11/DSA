
// Recursive Solution ********************************



// class Solution {
// public:

//     int maxRob(vector<int>&nums , int i ){
//         // base case
//         if(i>=nums.size()) return 0;

//         // 1 case solve
//         int rob1 = nums[i] + maxRob(nums , i+2);
//         int rob2 = 0 + maxRob(nums , i+1);

//         return max(rob1 , rob2);

//     }

//     int rob(vector<int>& nums) {
//         return maxRob(nums , 0);
//     }
// };