#include<bits/stdc++.h>
using namespace std;

int getLength(char ch[]){
    int cnt=0;
    for(int i = 0; ch[i]!='\0' ; i++){
        cnt++;
    }

    return cnt;
}


void reverse(char ch[]){
    int s = 0;
    int e = getLength(ch)-1;

    // while (s<=e)
    // {
    //     swap(ch[s] , ch[e]);
    //     s++;
    //     e--;
    // }

    for (; s<=e;)
    {
        swap(ch[s] , ch[e]);
        s++;
        e--;
    }
    
    

}



int main()
{


    char ch[100];
    cin>>ch;

    // cout<<"length of ch is "<<getLength(ch)<<endl;

    reverse(ch);

    for (int i = 0; i < 6; i++)
    {
        cout<<ch[i];
    }
    


    return 0;

}