#include<bits/stdc++.h>
using namespace std;

void print(int* brr){ // can't do (int& brr )

    cout<<*brr<<endl;

    cout<<brr[1]<<endl;
    cout<<brr[2]<<endl;
    cout<<brr[3]<<endl;

}


int main()
{
    int arr[] = {5,6,7,8,9};
    cout<<arr<<endl;

    int r = 5;

    // print(arr);

    // print(r); issme value ja rahi hai (r) varible ki that is 5 so int& brr shi hoga but (int* brr) will be wrong bcz r is not an address it is just a integer value 


    vector<int>brr{arr , arr+5};
    cout<<&brr<<endl;
    cout<<&brr[0]<<endl; /////// in vector case hamare pass copy create hoti hai that's why &brr and &brr[0] alag aata hai

    for(int i = 0 ; i < brr.size() ; i++){
        cout<<brr[i]<<" ";
    }


    return 0;

}