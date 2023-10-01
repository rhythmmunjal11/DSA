#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr= {12,3,4,4,5};

    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;

    int ans = (sizeof(arr)/sizeof(int));
    cout<<ans<<endl;
 
    return 0;

}