#include<bits/stdc++.h>
using namespace std;

int main()
{   // here we find minimum element in a array that is pivot
    vector<int>arr{3,8,10,17,1,2};

    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while (s<e)
    {
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }

        else{
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    cout<<"pivot is at index "<<s<<endl;
    cout<<"pivot value is  "<<arr[s]<<endl;
    


    return 0;

}