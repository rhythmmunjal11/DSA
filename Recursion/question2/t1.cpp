#include<bits/stdc++.h>
using namespace std;

int func(int& a){
    a = 11;
}

int main()
{
    int a = 10;

    cout<<a<<endl;

    // vector<int>arr{40};
    vector<int>arr;
    // arr.push_back(21);

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;

    func(a);

    cout<<a<<endl;
    

    

    return 0;

}