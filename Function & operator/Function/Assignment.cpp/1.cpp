#include<iostream>
using namespace std;

bool checkNum(int n){
    if ((n&1) == 0)   // ******** must use brackets
    {
        return true;
    }

    else{
        return false;
    }
    
}

int main()
{
    int n;
    cin>>n;

    bool isEven = checkNum(n);

    if (isEven)
    {
        cout<<"Number is Even ";
    }

    else{
        cout<<"Number is odd "<<endl;
    }
    


 
    return 0;

}