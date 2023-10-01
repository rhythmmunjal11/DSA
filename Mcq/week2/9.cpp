#include<iostream>
using namespace std;

int main()
{
    float a, b, c;

    // Floating-point decimal values generally do not have an exact binary representation. This is a side effect of how the CPU represents floating point data. For this reason, you may experience some loss of precision, and some floating-point operations may produce unexpected results.

    a = 1.345f;
    b = 1.123f;
    c = a + b;
    cout << c << endl;

    if (c == 2.468)
    {
        cout<< "inside if" << endl;
    }

    else{
        cout << "inside else "<<endl;
    }



    float x = 0.1;
    cout<<x<<endl;

    if (x==0.1)
    {
        cout<<"inside if "<<endl;
    }
    
    else{
        cout << "inside else " << endl;
    }
    
 
    return 0;

}
