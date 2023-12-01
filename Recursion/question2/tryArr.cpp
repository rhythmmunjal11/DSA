#include<bits/stdc++.h>
using namespace std;

void func(int arr[] , int n){ // insted of int arr[]

    cout<<"in function func "<<endl;
    // cout<<sizeof(arr)<<endl;
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl;
    arr = arr+1;
    cout<<arr<<endl;
    cout<<&arr<<endl;

    arr[0] = 90;
    arr[1] = 100;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    // cout<<arr[3]<<endl;
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
}

int main()
{
    int arr[5] = {10,11,12,14,13};

    // vector<int>arr = {10,11,12,14,13};

    cout<<"inside main "<<endl;

    cout<<sizeof(arr)<<endl;
    cout<<&arr[0]<<endl;
    //cout<<arr<<endl;  /// gives error in case of vector
    cout<<&arr<<endl;

    func(arr , 5);

    for (int i = 0; i <5; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;

}