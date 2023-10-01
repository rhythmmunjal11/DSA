#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr(8,9);
    // int arr[5];

    // cout<<arr.end();
    // reverse(arr.begin() , arr.end());

    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;

    cout<<arr.capacity()<<endl;
    
    // cout<<sizeof(arr)<<endl;
    cout<<arr.size()<<endl;

    

    return 0;

}