#include<iostream>
using namespace std;

int main()
{
    int y = 1;
    if (y && (y=2))
    {
        cout<<"value of y inside if "<<y<<endl;
    }

    else{
        cout<<"value of y inside else : " << y << endl;
    }
    
 
    return 0;

}