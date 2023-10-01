#include<iostream>
#include<vector>
using namespace std;

void moveNegative(int a[]  , int l , int h){

    while (l < h)
    {

        
        if (a[l] < 0)
        {
            l++;
        }

        else if (a[h] > 0)
        {
            h--;
        }

        else{
            swap(a[l] , a[h]);
        }
        
        
    }
    

}

int main()
{
    // vector<int>arr{1,2,-3,4,-5,6};

    // int start = 0;
    // int i = 0;

    // while (start < arr.size())
    // {
    //     if (arr[start] < 0)
    //     {
    //         swap(arr[start] , arr[i]);
    //         i++;
    //         start++;
    //     }

    //     else{
    //         start++;
    //     }
        
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    







    // or Do by dutch national flag algotithm 

    int arr[]={1,2,-3,5,-5,6};
    // vector<int>arr{1,2,-3,5,-5,6};  //we can't pass this as a vector means argument function m hum vector wala array nahi bhej sakte

    int l = 0;
    int h = 5;

    moveNegative(arr , l , h);

    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
 
    return 0;

}