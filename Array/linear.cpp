#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};

    int size = 5;
    int key = 4;
    bool flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            // cout<<"Element found "<<endl;
            flag = 1;
            break;
        }
        
    }

    if (flag = 1)
    {
        cout<<"found "<<endl;
    }

    else{
        cout<<"not found "<<endl;
    }
    


    
 
    return 0;

}