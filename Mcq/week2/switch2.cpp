#include<iostream>
using namespace std;

int main()
{
    char ch = 'A';

    switch (ch)
    {

    case 64+1 : cout << "inside switch " << endl;
        break;

    // case 'A' : cout << "inside switch " << endl;
    //     break; 
    // will throw error as duplicate case value as the value of 64+1 is already initilised which is same as 'A'
    
    default: cout << "Defalut case " << endl;
        break;
    }

    cout << "ouside switch " << endl;
 
    return 0;

}