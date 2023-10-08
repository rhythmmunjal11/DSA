#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5,9};

    int arr[] = {4,3,2,1,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    // if(binary_search(v.begin() , v.end() , 3)){
    //     cout<<"Found "<<endl;
    // }

    if(binary_search(arr , arr+size , 69)){
        cout<<"found"<<endl;
    }

    else{
        cout<<"not found"<<endl;
    }

    return 0;

}