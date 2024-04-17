#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr = {1,2,3,4,4,4,4,10,80};

    auto low = lower_bound(arr.begin() , arr.end() , 4); // works only when array is sorted 


    // so lower_bound function returns iterator 

    // cout<<low;

    // cout<<*arr.begin()<<endl;
    // cout<<*low<<endl;    //this will print value at low pointer

    cout<<low-arr.begin()<<endl;


    auto upper = upper_bound(arr.begin() , arr.end() , 4);
    // // cout<<*upper;

    cout<<upper-arr.begin();  // ye ek faltu index ki value dega 




    return 0;

}