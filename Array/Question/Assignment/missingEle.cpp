#include<iostream>
using namespace std;


// Visiteed Method -> ye method kam is condition ki vaje se kar raha h [1,N] elements hoge sirf array m 

// time complexity - > O(n)
// space complexity -> O(1)

void findElement(int *arr , int n){

    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]); // abs is like mod means positive the -ve value

        if (arr[index - 1] < 0 )
        {
            cout<<index-1<<endl;
        }
        
        else{
            arr[index-1]*=-1;
        }
        
    }

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > 0)
    //     {
    //         cout<<i+1<<" ";
    //         // break;
    //     }
        
    // }
    
    
}

int main()
{
    int arr[] = {1,3,3,4,6};
    int n = sizeof(arr)/sizeof(int);

    findElement(arr , n);
    
 
    return 0;

}