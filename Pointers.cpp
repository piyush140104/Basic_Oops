#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=4;
    cout<<&x<<endl;
    int *p=&x;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    *p=1000;
    cout<<x<<endl;
}