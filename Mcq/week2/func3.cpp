#include<iostream>
using namespace std;

int func(int a   , int b   , int c = 8 ){  // in this error will be thrown as defalut argument for b is missing as in main we are calling func(10) so this will only for a 
    return (a + b + c);
}

int main()
{
    cout<<func(8 ,9);
    //cout<<func(10);  //  matlab ho m value de rha hu usee agee default argmuent hone chaiye 
 
    return 0;

}