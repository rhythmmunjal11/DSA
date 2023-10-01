#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int k = (a++ , a++);
    cout << k << endl;



    int b = (1,(2,3));
    cout << b << endl;

    int c = ((1,2),3);
    cout << c << endl;
 
    return 0;

}