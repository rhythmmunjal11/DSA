#include<iostream>
using namespace std;

bool findTarget(int arr[][4] , int row , int col , int target){
    
    int s = 0;
    int e = row*col - 1;
    int mid = s + (e-s)/2;

    while (s <= e)
    {
        int rowIndex = mid/col;
        int colIndex = mid%col;

        if (arr[rowIndex][colIndex] == target)
        {
           cout<<"found at "<<rowIndex<<" "<<colIndex<<endl;
           return true;
        }

        else if (arr[rowIndex][colIndex] < target)
        {
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
        
        
        
    }

    return false;
    
}



int main()
{
    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};

    int row = 5;
    int col = 4;

    int s = 0;
    int e = row*col -1;
    // int mid = s + (e-s)/2;

    int target = 18;

    int ans = findTarget(arr , row , col , target);

    if (ans)
    {
        cout<<"element found at index"<<endl;
    }

    else{
        cout<<"not found ";
    }
    
    
 
    return 0;

}