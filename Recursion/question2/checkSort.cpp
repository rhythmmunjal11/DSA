#include<bits/stdc++.h>
using namespace std;

bool checkSort(vector<int>&arr , int& n, int i){
    
    //base case
    if (i == (n-1))
    {
        return true;
    }

    // 1 case
    if (arr[i] > arr[i+1]) 
    {
        return false;
    }

    // baaki recursion will handle
    return checkSort(arr,n,i+1);
    
    

}

int main()
{
    // int arr1[5] {10,20,30,40,50};
    // int arr1[]=(3,4); // error *********** 
    // int arr1[5] (10,20,30,40,50); // error
    // int arr2[5]  {10}; // error
    // vector<int>arr2(5,20,30,40);  // error
    // vector<int>arr2(5,20); // pheli 5 value 20 hai
    //vector<int>arr2{5}; // pheli value 5 hai baaki sari random value hai

   // int arr2[5]   {10}; //****************** pheli value 5 hai baaki 4 value 0 hai 

    // vector<int>arr2={5}; pheli value 5 hogi
    //vector<int>arr2(5); // pheli 5 value 0 hogi as size is mentioned 5

    // int arr2[5] = (2);     wrong
    int arr2[5]; // saari random value 

    for (int i = 0; i < 7; i++)
    {
        /* code */
        cout<<arr2[i]<<" ";
    }
    
    // cout<<endl;



    
    // vector<int>arr={2,4,6,8,9,7};
    // vector<int>arr={10,20,30,40,50,60};
    vector<int>arr{10,20,40,30,60,50};
    int n = 6;
    int i = 0 ;

    // bool ans  = checkSort(arr,n,i);

    // if(ans){
    //     cout<<"sorted ";
    // }

    // else {
    //     cout<<"not sorted ";
    // }

    return 0;

}