#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // applied on to find ith largest element
    // ************* also known as sinking sort  

    // best time complexity is : O(n)
    // otheriwse : O(n^2);

    // space -> O(1);



    vector<int>arr{10,1,12,5,3};
    int n = arr.size();

    for (int round = 1; round < n; round++)
    {
        bool swapped = false;
        for (int j = 0; j < n-round; j++)
        {
            if (arr[j] > arr[j+1]) // 
            {
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
            
        }

        if (swapped == false)
        {
            break;  /// means sort hi tha array 
        }
        
        
    }


    // printing
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
 
    return 0;

}