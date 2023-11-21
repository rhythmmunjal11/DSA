#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int arr[10] = {0};
    // int* ptr = &arr[0];

    float f = 10.5;
    float p = 2.5;
    float* ptr = &f;
    (*ptr)++;
    *ptr = p;

    cout<<*ptr<<" "<<f << " " <<p;

    return 0;

}