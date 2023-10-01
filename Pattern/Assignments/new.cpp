#include<iostream>
#include<assert.h>
using namespace std;

int main()
{

    // cout<<6/0;

    // int d = 6;
    // int z = 0;
    // cout<<d/z;
    // cout<<r<<endl;

    int n;
    cin>>n;

    assert(n<=9);

    for (int row = 0; row < n; row++)
    {
        int start = 8-row;
        int num = row + 1;
        int count = num;

        for (int col = 0; col < 17; col++)
        {
            if (col == start && count > 0)
            {
                cout<<num;
                count--;
                start+=2;
            }

            else{
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    


 
return 0;

}