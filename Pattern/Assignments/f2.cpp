#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;

    int start = 1;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2*row + 1; col++)
        {
            if (col % 2 != 0)
            {
                cout<<"*";
            }

            else{
                cout<<start++;
            }
            
        }

        cout<<endl;
        
    }

    // cout<<start;

    int start1 = start - n;
    for (int row = 0; row < n; row++)
    {
        int k = start1;
        for (int col = 0; col < 2*n-2*row-1; col++)
        {
            if (col % 2 != 0)
            {
                cout<<"*";
            }

            else{
                cout<<k++;
            }
            
        }

        cout<<endl;
        start1 = start1 - (n-row-1);
        
    }


    
    

 
return 0;

}