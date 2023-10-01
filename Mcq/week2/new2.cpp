#include<iostream>
using namespace std;

int main()
{

    

    switch (int n = 5)
    {

        cout<<"statement"<<endl;
        break;
    case 3:
        cout<<"3 wala";
        break;


        cout<<"statement"<<endl;
        break;
        // continue;


    case 5:
        switch (int n = 10)
    {
    case 10:
        cout<<"10wala";
        break;
    
    case 1:
        cout<<"1 wala";
        break;
    
    default:
        break;
    }

    cout<<"5 wala tha ";
        break;



    
    default: cout<<"defalut wala";
        break;
    }



    cout << endl;

    
 
    return 0;

}