#include<bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int>arr{2,0,2,1,1,0};

    // sort(arr.begin() , arr.end());

    // for(auto i : arr){
    //     cout<<i<<" ";
    // }



    vector<int>arr{1,2,-3,4,-5,6};

    int k = 0;

    for(int i = 0 ; i < arr.size() ; i++){

        if(arr[i] < 0){
            swap(arr[k] , arr[i]);
            k++;
        }

    }

    for(auto j : arr){
        cout<<j<<" ";
    }





    return 0;

}