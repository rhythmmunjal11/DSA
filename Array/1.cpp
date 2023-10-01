// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[4] = {1,2,3,4};

    // int srr[+9] = {1,2,3,4} ; 
    // cout<<srr<<endl;
    // cout<<sizeof(srr)<<endl;
    

    // int frr[0];
    // cout<<frr[2]<<endl; // gives random value 



    // int grr[5] = {1,2,3};

    // memset(grr , -1 , sizeof(grr));

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<grr[i]<<endl;
    // }

    

    // cout<<INT_MIN;

    int maxi = INT_MIN;

    int arr[5] = {INT_MIN , 2,3,4,3};

    for (int i = 0; i < 5; i++)
    {
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }

    cout << maxi;
    






    // *************  very importnat //////////// 

    // memeset works for 0 and -1 value and for other it would not work 
    


 
    return 0;

}