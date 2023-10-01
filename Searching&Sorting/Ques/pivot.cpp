#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int>arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while (s<=e)
    {
        if (s==e)
        {
            // single element ho jab array m
            return s;
        }

        if (mid+1 <=e && arr[mid] > arr[mid+1])
        {
            return mid;
        }

        if (mid - 1 >=s && arr[mid-1] > arr[mid])
        {
            return mid-1;
        }

        if (arr[e] < arr[mid])
        {
            s = mid + 1;
        }
        // if (arr[s] > arr[mid])
        // {
        //     e = mid - 1;
        // }

        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
        
           
    }

    return -1;
    
}

int main()
{

    // vector<int>arr{9,10,2,4,6};
    vector<int>arr{9};
    // vector<int>arr{9,10,2,4,6};

    int ans = findPivot(arr);

    if (ans == -1)
    {
        cout<<"nahi chala "<<endl;
    }

    else{
        cout<<"index of pivot element is :"<<ans<<endl;
        cout<<"element of pivot element is :"<<arr[ans]<<endl;
    }
    
    
 
    return 0;

}