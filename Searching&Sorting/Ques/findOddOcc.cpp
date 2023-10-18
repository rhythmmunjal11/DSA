#include<iostream>
#include<vector>
using namespace std;


// find odd occurence 

int findIndex(vector<int>arr){
    int s = 0;
    int e = arr.size() - 1;

    int mid = s + (e-s)/2;
    // int index = 0;

    while (s<=e)
    {
        if (s == e)
        {
            return s;
        }

        else if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid+1])
            {
                s = mid + 2;
            }

            else{
                e = mid;

            }
            
        }

        else{ // odd index 
            if (arr[mid] == arr[mid-1])
            {
                s = mid + 1;
            }

            else{
                e = mid - 1;
            }
            
        }

        mid = s + (e-s)/2;
        
        
    }

    return -1;
    
}

int main()
{
    // vector<int>arr{1,1,2,2,3,3,4,4,3,5,5,6,6};
    vector<int>arr{1,1,2,2,3};

    int ans = findIndex(arr);
    cout<<"index is : "<<ans<<endl;
    cout<<"value is : "<<arr[ans]<<endl;
 
    return 0;

}