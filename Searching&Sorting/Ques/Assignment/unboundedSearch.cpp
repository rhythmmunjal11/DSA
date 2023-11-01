#include<bits/stdc++.h>
using namespace std;

int bs(int arr[] , int i , int j , int target){
    int s = i;
    int e = j;

    while (s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == target){
            return mid;
        }

        else if(arr[mid] > target){
            e = mid - 1;
        }

        else {
            s = mid + 1;
        }
    }

    return -1;
    
}

int Search(int arr[] , int target){
    int i = 0;
    int j = 1;

    while (arr[j] < target)  // or arr[j] <= target
    {
        i = j;
        j*=2;
    }

    return bs(arr,i,j,target);
    
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int target = 5;
    // int n = sizeof(arr)/sizeof(arr[0]); as it is infinite search so no need of this

    int ans = Search(arr , target );
    cout<<ans<<" "<<endl;

    return 0;

}