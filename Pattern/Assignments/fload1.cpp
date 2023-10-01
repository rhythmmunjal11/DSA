#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    cout<<"*"<<endl;

    for (int row = 0; row < n; row++)
    {
        int cond = row<=n/2 ? 2*row : 2*(n-row-1);
        for (int col = 0; col <= cond; col++)
        {
            if (col==0)
            {
                cout<<"*";
            }
            
            if (col<=cond/2)
            {
                cout<<col+1;

                
            }
            
            else{

                cout<<cond-col+1;
                


            }
           

        }
        cout<<"*";

        cout<<endl;
        
    }

    cout<<"*";
    

    return 0;

}