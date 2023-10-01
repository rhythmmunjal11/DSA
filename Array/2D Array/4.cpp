#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int arr[][3] , int row , int col){
    int maxi = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
            
        }
        
    }

    return maxi;
    
}


int findMin(int arr[][3] , int row , int col){
    int mini = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < mini)
            {
                mini = arr[i][j];
            }
            
        }
        
    }

    return mini;
    
}

int main()
{
    // finding maximum and minimum elements in 2D Array

    int arr[3][3];
    int row = 3;
    int column = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>arr[i][j];  // 
        }
        
    }

    cout<<"Maximum element : "<<findMax(arr , row , column)<<endl;

    cout<<endl;
    
    cout<<"Minimum element : "<<findMin(arr , row , column)<<endl;
 
    return 0;

}