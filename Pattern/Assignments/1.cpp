#include "iostream"
#include "assert.h"
using namespace std;

int main()
{
    int n;
    cin>>n;

    

    assert(n<=9);  //*********** importatn ******8
    // means progrmmer is expecting value of n to be less than or equal to 9 
    // usse aage nahi chalega 

    for (int row = 0; row < n; row++)
    {
        int start_num_index = 8-row;
        int num = row+1;
        int count = num;

        for (int col = 0; col < 17; col++)
        {
            if (col == start_num_index && count > 0)
            {
                cout<<num;
                start_num_index+=2;
                count--;
            }

            else{
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    
 
    return 0;

}