// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {

//         int mini = INT_MAX;
//         int max = 0;
//         int diff = 0;
        
//         for(int i = 0; i < prices.size(); i++){
//             if(prices[i] < mini){
//                 mini = prices[i];
//             }
//             diff = prices[i] - mini;
//             if(max < diff){
//                 max = diff;
//             }
//         }
//         return max;
//     }
// };