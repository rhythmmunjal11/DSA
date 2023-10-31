class Solution {
public:

    int binarySearch(vector<int>&arr , int x){
        int s = 0 ; 
        int e = arr.size() - 1;
        int mid = s + (e-s)/2;
        int ans = e; // ans = e insted of -1 as [3,5,8,10] testcase

        while(s<=e){
            if(arr[mid] >= x){
                ans = mid;
                e = mid - 1;
            }

            else if(arr[mid] < x){
                s = mid + 1;
            }

            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }



    vector<int>bs(vector<int>&arr , int k , int x){

        int h = binarySearch(arr , x);
        int l = h - 1;   

        while(k--){

            if(l < 0){
                h++;
            }

            else if(h >= arr.size()){
                l--;
            }


            else if(x-arr[l] > arr[h] - x){
                h++;
            }
            else{
                l--;
            }
        }

        // vector<int>ans;
        // for(int i = l ; i <= h ; i++){
        //     ans.push_back(arr[i]);
        // }

        // return ans;

        return vector<int>(arr.begin() + l + 1 , arr.begin() + h);
    }


     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return bs(arr , k , x);
    }











    // vector<int>twoPointer(vector<int>&arr , int k , int x){
    //     int l = 0;
    //     int h = arr.size()-1;

    //     while(h-l >= k){
    //         if(x-arr[l] > arr[h] - x){
    //             l++;
    //         }
    //         else{
    //             h--;
    //         }
    //     }

    //     // vector<int>ans;
    //     // for(int i = l ; i <= h ; i++){
    //     //     ans.push_back(arr[i]);
    //     // }

    //     // return ans;

    //     return vector<int>(arr.begin() + l , arr.begin() + h + 1);
    // }



    // vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    //     return twoPointer(arr , k , x);
    // }
};