#include<iostream>
#include<vector>
using namespace std;

// Wave Print 

void wavePrint(vector<vector<int> >arr){
    int row = arr.size();
    int col = arr[0].size();

    for (int startCol = 0; startCol < col; startCol++)
    {
        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout<<arr[i][startCol]<<" ";
            }

            cout<<endl;
            
        }


        else{
            for (int j = row-1; j >= 0; j--)
            {
                cout<<arr[j][startCol]<<" ";
            }

            cout<<endl;
            
        }
        
    }
    


}

int main()
{
    vector<vector<int> >arr = {{1,2,3,4} , {5,6,7,8} , {9,10,11,12}};

    wavePrint(arr);
    
 
    return 0;

}