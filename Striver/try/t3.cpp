#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr{1,2,3,4,5};

    // reverse(arr.begin()  , arr.end()+2); // important 

    // reverse(arr.begin() , arr.end());

    // reverse(arr.begin()+3 , arr.end()); // 1 2 3 5 4

    // reverse(arr.begin() , arr.end()-2); // 3 2 1 4 5

    // reverse(arr.begin() , arr.begin()+3); // 3 2 1 4 5

    // reverse(arr.begin()  , arr.begin() + 4); // 4 3 2 1 5


    // ************* 

    //reverse(arr.begin() + 2 , arr.begin() + 4); // 1 2 4 3 5 ************* important 

    // ************ // reverse(arr.end() - 3 , arr.end()); // 1 2 5 4 3

    //reverse(arr.begin() , arr.end() + 2); // random value random 5 4 3


    //reverse(arr.begin() + 1 , arr.end()); // 1 5 4 3 2

    // reverse(arr.begin() + 0 , arr.end()); // 5 4 3 2 1

    reverse(arr.begin() + 1 , arr.begin() + 4); // 1 4 3 2 5

    

    for (int i = 0; i < arr.size(); i++)
    {
       cout<<arr[i]<<" ";
    }
    

    return 0;

}