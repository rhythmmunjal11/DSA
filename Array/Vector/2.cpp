#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    // vector<int>arr{n};
    // vector<int>arr(n);   same 
    // vector<int>arr((n));  same 



    
       vector<int>arr[n];  /// wrong

    //    vector<int>arr[5];      /// wrong


    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // vector<int>arr(5);
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }    0 0 0 0 0 


    // vector<int>arr{5};

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }




    // int arr[5] = {0};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;
    
    // int arr1[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr1[i]<<" ";
    // }
    
    
    






    

//    vector<int> num = {1, 2, 3};
//     vector<int>::iterator iter;

// iter points to num[0]
    // iter = num.begin();
    // cout<<*iter<<endl;

    // iter = num.end()-1;
    // cout<<*iter<<endl;

    // for (iter = num.begin(); iter != num.end(); ++iter) {
    //     cout << *iter << "  ";
    // }









    return 0;

}