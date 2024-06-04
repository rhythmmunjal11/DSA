#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[7] = {3,5,1,2,1,7,2};
    unordered_map<int , int>mpp; // in unordered_map the sequence of key(numbers) is unordered

    // if key was char then (map<char , int>mpp)
    for(int i = 0 ; i < 7 ; i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        cout<<it.first<<"-> "<<it.second<<endl; // means map stores numbers(key) in sorted order
    }
    cout<<endl;
    cout<<mpp.size()<<endl;



    return 0;

}