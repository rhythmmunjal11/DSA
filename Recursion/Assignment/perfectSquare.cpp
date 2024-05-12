// this code will give TLE error


// class Solution {
// public:

//     int numHelper(int n){
//         // base case
//         if(n==0) return 1;
//         if(n < 0) return 0;

//         // 1 case solve
//         int ans = INT_MAX;
//         int i = 1;
//         int end = sqrt(n);

//         while(i<=end){

//             int perfectSquare = i*i;
//             int numberOfPerfectSquare = 1 + numHelper(n-perfectSquare);
//             if(numberOfPerfectSquare < ans){
//                 ans = numberOfPerfectSquare;
//             }
//             i++;

//         }

//         return ans;

//     }

//     int numSquares(int n) {
//         return numHelper(n) - 1;
//     }
// };