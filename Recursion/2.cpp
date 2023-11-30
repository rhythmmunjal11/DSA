#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {11,2,34,2,1};

    int* ptr2 = &(arr);  //***************************

    int* ptr1 = &arr[0];
    int* ptr = arr;

    // cout<<arr<<endl;
    // cout<<ptr<<endl;
    // cout<<ptr1<<endl;
    // // cout<<ptr2<<endl;

    cout<<arr<<endl;
    cout<<&arr<<endl;
    // cout<<(arr+1)<<endl;
    // cout<<&(arr+1)<<endl;

    return 0;

}