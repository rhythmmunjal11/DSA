#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& arr , int s , int e , int key){

    int mid = s + (e-s)/2;

    // base case
    if (s>e)
    {
        return -1;
    }

    // 1 case
    if (arr[mid] == key)
    {
        return mid;
    }

    // recursion

    // if (arr[mid] < key)
    // {
    //     return binarySearch(arr , mid + 1 , e , key);
    // }

    // else{
    //     return binarySearch(arr , s , mid-1 , key);
    // }




    // or  **********************


    return arr[mid] < key ? binarySearch(arr,mid+1,e,key) : binarySearch(arr,s,mid-1,key);
    
    
    


}

int main()
{
    // int arr[5] = {10,20,30,44,50};
    vector<int>arr{10,20,30,44,50};
    // sort(arr.begin() , arr.end());
    int s = 0 ;
    int n = 5;
    int e = n - 1;

    int key = 50;

    int ans = binarySearch(arr , s , e , key);
    cout<<ans;

    return 0;

}