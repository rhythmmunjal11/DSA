class Solution {
public:

    int bs(vector<int>&nums , int start , int target){
        int end = nums.size() - 1;

        while(start<=end){
            int mid = (start + end)/2;

            if(nums[mid] == target){
                return mid;
            }

            else if(nums[mid] > target){
                end = mid - 1;
            }

            else {
                start = mid + 1;
            }
        }

        return -1;
    }


    int findPairs(vector<int>& nums, int k) {
        // sort(nums.begin() , nums.end());
        // set<pair<int,int>>ans;

        // int i = 0;
        // int j = 1;

        // while(j < nums.size()){
        //     int diff = nums[j] - nums[i];
        //     if(diff == k){
        //         ans.insert({nums[i] , nums[j]});
        //         i++;
        //         j++;
        //     }

        //     else if(diff > k){
        //         i++;
        //     }

        //     else{
        //         j++;
        //     }

        //     if(i==j){
        //         j++;
        //     }
        // }

        // return ans.size();




    /// another method ********************************
        sort(nums.begin(), nums.end());
        set<pair<int,int>>ans;

        for(int i = 0 ; i < nums.size() ; i++){
            if(bs(nums , i+1 , nums[i] + k) != -1){
                ans.insert({nums[i], nums[i] + k});

            }
        }

        return ans.size();



















    }
};