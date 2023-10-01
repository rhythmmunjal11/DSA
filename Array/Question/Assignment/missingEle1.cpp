#include<iostream>
using namespace std;


// time complexity : O(n)
// space complexity : O(1)

void findElement(int *arr , int n){

    int i = 0;

    while (i<n)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i] , arr[index]);
        }

        else{
            i++;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i+1)
        {
            cout<<"Missing Element is: "<<i+1<<endl;
        }
        
    }
    
    
    
    


}

int main()
{
    // swapping + sorting

    int arr[] = {1,3,4,4,3};
    int n = sizeof(arr)/sizeof(int);

    findElement(arr , n);


 
    return 0;

}