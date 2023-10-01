#include<iostream>
using namespace std;

void transpose(int arr[][3] , int row , int col , int transposeArr[][3]){

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposeArr[j][i] = arr[i][j];
        }
        
    }

    cout<<"printing transposeArr "<<endl;


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<transposeArr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    

}

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<"transppose "<<endl;
    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[j][i]<<" ";
        }

        cout<<endl;
        
    }
    
    // int transposeArr[3][3];
    // transpose(arr , 3 , 3 , transposeArr);

    
    return 0;

}