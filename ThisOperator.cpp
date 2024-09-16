#include<bits/stdc++.h>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    // if your variables and attributes name is same then we use 'this'
    Cricketer(string name,int runs)
    {
        this->name=name;
        this->runs=runs;
    }
};
void print_cricketers(Cricketer t)
{
    cout<<t.name<<" "<<t.runs<<endl;
}
int main()
{
    Cricketer c1("virat kohli",25000);
    Cricketer c2("rohit sharma",23000);  
    print_cricketers(c1);
    print_cricketers(c2);
}