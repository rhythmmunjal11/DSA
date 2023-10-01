#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        int cond = row<=n/2 ? 2*row : 2*(n-row-1);

        for (int j = 0; j <= cond; j++)
        {
            if (j<=cond/2)
            {
                cout<<j+1;
            }

            else{
                cout<<cond-j+1;
            }
            
        }

        cout<<endl;
        
    }
    
 
    return 0;

}