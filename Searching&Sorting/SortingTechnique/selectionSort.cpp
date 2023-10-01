#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // Selection Sort -> applied on small size array
    //time complexity : O(n^2) and space complexity : O(1)    

    vector<int>arr{5,4,3,2,1};
    int n = arr.size();

    for (int i = 0; i < n-1; i++)
    {// outer loop represents number of rounds 
        int minIndex = i;
    

        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
            
        }

        swap(arr[minIndex] , arr[i]);
        
    }

    


    // printing
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    
    
 
    return 0;

}