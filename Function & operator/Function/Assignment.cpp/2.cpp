#include<iostream>
using namespace std;

long long int findFact(long long int n){
   long long int cal = 1;
    while (n > 0)
    {
        cal = cal * n;
        n--;
    }
    return cal;
}

int main()
{
   long long int n;
    cin>>n;

   long long int factorial = findFact(n);
    cout<<factorial<<endl;
 
    return 0;

}