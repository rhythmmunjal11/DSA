#include<bits/stdc++.h>
using namespace std;

void subArr_util(vector<int>& arr , int start , int end){

    // base case
    if(end >= arr.size()){
        return;
    }

    // 1 case solve
    for (int i = start; i <= end; i++)
    {
        cout<<arr[i]<<"";
    }

    cout<<endl;

    // RE
    subArr_util(arr , start , end+1);




    // cout<<"e : "<<end<<endl;
    

}

void subArr(vector<int>& arr){

    for (int start = 0; start < arr.size(); start++)
    {
        int end = start;  //// *********
        subArr_util(arr , start , end);
    }
    
}


int main()
{
    // print all subArray using recursion 

    // we can't use inclusion-exclusion here bcz in this subArr this means to print subArray in (contigous form) 

    // And inclusion-exclusion prints in non-contigous form 


    vector<int>arr{1,2,3,4,5};
    subArr(arr );




    return 0;

}