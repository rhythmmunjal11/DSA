#include<iostream>
using namespace std;

int main()
{
    // hollow pyramid 

    int n;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int spaces = 0; spaces < n-row-1; spaces++)
        {
            cout<<" ";
        }
        
        for (int col = 0; col < (row*2) + 1; col++)
        {
            if (col == 0 || col == (row*2))
            {
                cout<<"*";
            }

            else{
                cout<<" ";
            }
            
        }

        cout << endl;
        
    }




    for (int row = 0; row < n; row++)
    {
        for (int spaces = 0; spaces < row; spaces++)
        {
            cout<<" ";
        }

        for (int col = 0; col < n*2 - ((row*2)+1); col++)
        {
            if (col == 0 || col == n*2 - ((row*2)+2))
            {
                cout<<"*";
            }

            else{
                cout<<" ";
            }

            
        }

        cout<<endl;
        
        
    }
    
    
 
    return 0;

}