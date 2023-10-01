#include<iostream>
using namespace std;

int main()
{
    // Taking row wise input

    int arr[3][3];
    int rows = 3;
    int cols = 3;

    // row wise
    // for (int i = 0; i < rows; i++)
    // {   
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }

    // cout<<"printing row wise " << endl;

    // printing row wise 

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < cols; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }






// ****************************************

    /// input column wise ********* imp 

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr[j][i];  
            //as humne input column wise le liya to print hum normal karwage cout<<arr[i][j] bcz memory m vo column wise hua ha 
        }
        
    }

    cout<<"printing column wise " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }


    
 
    return 0;

}