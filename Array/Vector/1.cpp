#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int>arr(10 , 6);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    

    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;


    // vector<int>crr{10,20,30,40};
    // for (int i = 0; i < crr.size(); i++)
    // {
    //     cout<<crr[i]<<" ";
    // }

    // cout<<endl;
    // cout<<crr.capacity()<<endl;
    

    vector<int>drr(10);
    cout<<drr.size()<<endl;
    cout<<drr.capacity()<<endl;

    cout<<sizeof(drr)/sizeof(int)<<endl;
    cout<<sizeof(drr)<<endl;
    cout<<drr.size()<<endl;

    // cout<<endl;

    // for (int i = 0; i < drr.size(); i++)
    // {
    //     cout<<drr[i]<<" ";
    // }






    
    // int arr[3];
    // cout<<sizeof(arr);
    // cout<<arr.size();    /// only for vector 


    vector<int>arr1;
    cout<<arr1.empty()<<endl;
    // 1 means vector is empty 
    cout<<arr1.size()<<endl;




 
    return 0;

}