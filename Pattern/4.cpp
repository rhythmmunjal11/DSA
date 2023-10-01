#include<iostream>
using namespace std;

int main()
{
    // ****************************** imp *******************

    // Hollow Pyramid ************************** but below is full pyramid

    // int n;
    // cin>>n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int spaces = 0; spaces < n-row-1; spaces++)
    //     {
    //         cout<<" ";
    //     }

    //     for (int col = 0; col < (row*2) + 1; col++)
    //     {
    //         cout<<"*";
    //     }

    //     cout<<endl;
        
        
    // }


    // or ***********************   Hollow 

    int n;
    cin>>n;


    for (int row = 0; row < n; row++)
    {
        int k = 0; /// k variable is for * printing

        for (int col = 0; col < (n*2)-1; col++)
        {
            // for spaces
            if (col < n-row-1)
            {
                cout<<" ";
            }

            else if (k < row*2 + 1)
            {
                if (k == 0 || k == 2*row || row == n-1)
                {
                    cout<<"*";
                }

                else{
                    cout<<" ";
                }

                k++;
                
            }

            else{
                cout<<" ";
            }

            
        }


        cout<<endl;
        
    }
    

    
    

    

    return 0;

}