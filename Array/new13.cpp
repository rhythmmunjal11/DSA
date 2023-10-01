#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1};

    memset(arr , 25 , sizeof(arr));

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    // int arr[5] = {10,20,30,40,50};

    // int i = 0;
    // arr[i] = i++;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    

    return 0;

}