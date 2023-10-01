#include<iostream>
using namespace std;

int main()
{
    cout<<(6&'a')<<endl;
    cout<<(6&&' ')<<endl;
    cout<<(6&&"munjal")<<endl;
    cout<<(6&&"")<<endl;
    cout<<(6&&" ")<<endl;
    cout<<(6&&-6)<<endl;
    cout<<(6&&-0)<<endl;
 
    return 0;

}