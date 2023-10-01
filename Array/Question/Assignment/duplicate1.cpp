#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr{1,3,4,2,2,3};

    sort(arr.begin() , arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == arr[i+1]){
            cout<<"Duplicate Element found : "<<arr[i]<<endl;
            // break;
        }
    }
    
 
    return 0;

}