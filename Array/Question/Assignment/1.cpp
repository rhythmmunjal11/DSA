#include<iostream>
using namespace std;

int main()
{

    // 1. first method is to sort(arr.begin() , arr.end());

    // 2. second method is to overwrite them (means to count one's zero's and two's and then overwrite these count in array)

    // int i = 0;
    // while(zero--){
    //     nums[i] = 0;
    // }
    // while(first--){
    //     nums[i] = 1;
    // }
    // while(second--){
    //     nums[i] = 2;
    // }





    //3. inplace sort  ///////////////////////////////



    //  sort 0's 1's and 2's *******************


    // do sort 0's 1's 2's and 3's 


//     class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int start = 0;
//         int mid = 0;
//         int end = nums.size()-1;

//         while(mid <= end){
//             if(nums[mid] == 0){
//                 swap(nums[mid] , nums[start]);
//                 mid++;
//                 start++;
//             }


//             else if(nums[mid] == 1){
//                 mid++;
//             }

//             else{
//                 swap(nums[mid] , nums[end]);
//                 end--;
//             }
//         }
//     }
// };
 
    return 0;

}