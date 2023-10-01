#include<iostream>
using namespace std;

int main()
{
    int k = 0;

    switch (k)
    {
    case 1!=1:
        cout << "switch printed  "<<endl;
        break;

    case 1&&2: cout << "1&&2 "<<endl;
        break;
    
    default: cout << "defalut case "<<endl;
        break;
    }


    cout << "outside switch "<<endl;
 
    return 0;

}