#include<bits/stdc++.h>
using namespace std;

void revStrr(string& str , int s , int e ){

    // base case
    if (s>=e)    // same as s>e
    {
        return;
    }

    // 1 case solve
    swap(str[s] , str[e]);


    // baaki recursion will handle

    revStrr(str , s+1 , e-1);
    


}

int main()
{
    string str = "munjal";
    // string str = "raceCar"; // raCecar 

    // reverse

    // int s = 0;
    // int e = str.size()-1;

    revStrr(str , 0 , str.size()-1);


    cout<<str<<" ";

    // for (auto i : str)
    // {
    //     cout<<i<<" "; // prints l a j n u m
    // }
    

    return 0;

}