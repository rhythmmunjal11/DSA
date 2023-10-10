#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr{1,2,3,4,6,7,8};

    int s = 0 ; 
    int e = arr.size()-1;

    int mid = s + (e-s)/2;
    int ans = -1;


    while (s<=e)
    {
        if(arr[mid]-mid == 1){
            s = mid + 1;
        }

        else{
            ans = mid;
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    cout<<ans+1;
    

    return 0;

}