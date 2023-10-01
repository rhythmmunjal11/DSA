#include<iostream>
using namespace std;

int func(int a, int b = 8   , int c = 0);// func declare

int main()
{

    cout<<func();

    return 0;

}


int func(int x = 0    , int y    , int z   ){

    cout << "x is : " << x << endl;
    cout << "y is : " << y << endl;
    cout << "y is : " << z << endl;

    return(x+y+z);
}
