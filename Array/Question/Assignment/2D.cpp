#include<iostream>
#include<vector>
using namespace std;

void wavePrint(vector<vector<int> >arr){
    int row = arr.size();
    int col = arr[0].size();

    for (int startCol = 0; startCol < col; startCol++)
    {
        if ((startCol & 1) == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout<<arr[j][startCol]<<" ";
                
            }
            cout<<endl;
            
        }

        else{
            for (int i = row-1; i >= 0; i--)
            {
                cout<<arr[i][startCol]<<" ";
                
            }
            cout<<endl;
            
        }
        
    }
    
}

int main()
{
    // vector<int>arr;
    // int arr[3][3] = {{1,2,3} , {4,5,6} , {7,8,9}};

    vector<vector<int> >arr = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    wavePrint(arr);
 
    return 0;

}