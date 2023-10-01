#include<iostream>
using namespace std;

int printArrSum(int arr[][3] , int row , int column){
    
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < column; j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
        
    }
    
}



bool checkkey(int arr[][3] , int row , int col , int key){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
            
        }
        
    }

    return false;
    
}


int main()
{
    // priting sum : column wise so input hi sidha column wise le lo 

    int arr[3][3];
    int row = 3;
    int column = 3;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>arr[j][i];  // 
        }
        
    }

    // cout<<"printing sum "<<endl;
    cout<<"is element present or not "<<endl;

    // printArrSum(arr , row , column);


    int key = 8;
    if(checkkey(arr , 3 ,3 , key)){
        cout<<"true";
    }
    
    else{
        cout<<"false ";
    }

 
    return 0;

}