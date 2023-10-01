#include<iostream>
#include<vector>
using namespace std;   

int main()
{

    int rows = 5 ,cols = 5;
    // int cols = 5;

    vector<vector<int> >arr(rows , vector<int>(cols , 9));
    

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++) // we  can also use j < arr[0].size() bcz number of columns same h 2D array m that is 5 .
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
        
    }
    
 
    return 0;

}