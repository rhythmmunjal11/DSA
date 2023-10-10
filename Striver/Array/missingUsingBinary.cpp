#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr{2,3,4,5,6};

    int s = 0 ; 
    int e = arr.size()-1;

    int mid = s + (e-s)/2;
    int ans = 0;


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

    //  if(ans +1 == 0)
    //     cout<<arr.size()+1;

    cout<<ans+1;

    

    return 0;

}