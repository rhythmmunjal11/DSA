#include<iostream>
using namespace std;

int raja = 10;  // global variable

int main()
{
    // int a = 5;
    // cout << (++a) * (++a) << endl;

    // cout <<  raja << endl;

    // int raja = 11;
    // cout << raja << endl;


    int value;
    cin >> value;

    switch (value)
    {
    case 1:  cout << "rhythm";
        // break;

    case 2:  cout << "munjal";
        // break;

    case 3:  cout << "rahul";
        // break;

    case 4:  cout << "neha";
        // break;
    
    default: cout << " suresh ";    // now if i enter 2 then munjalrahulneha suresh will be printed **************************** ///////
        // break;
    }



 
    return 0;

}