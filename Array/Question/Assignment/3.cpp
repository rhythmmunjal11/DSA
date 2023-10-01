// #include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    vector<int>arr{1,2,4,-3,-5};
    sort(arr.begin() , arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
 
    return 0;

}