#include<iostream>
using namespace std;

int main()
{
    int a;

    switch (a)
    {
    // case a:
    cout << "inside switch " << endl;  // this can't print as there is no case and default case 
    
    default: cout << "inside switch "<<endl;
        

    }


    cout << "outside switch " << endl;
 
    return 0;

}