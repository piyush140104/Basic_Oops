#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string name;
    int runs;
    float avg;
    // if your variables and attributes name is same then we use 'this'
    Cricketer(string name, int runs,float avg)
    {
        this->name = name;
        this->runs = runs;
        this->avg=avg;
    }

    // Suppose by chance inside print_cricketer function you pass runs varibale again
    // then to print correctly again 'this' helps 
    void print_cricketers()
    {
        cout <<this->name<< " " <<this->runs<<" " <<this->avg<<endl;
    }

    void solve(int a)
    {
        cout<<a<<endl;
    }

    void printing(int runs)
    {
        cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
        cout<<runs<<endl;
    }

    int num_matches()
    {
        return runs/avg;
    }
};

int main()
{
    Cricketer c1("virat kohli", 25000,55.5);
    Cricketer c2("rohit sharma", 23000,70.7);
    c1.print_cricketers();
    c2.print_cricketers();
    c1.solve(7);
    c2.solve(9);    
    c1.printing(1000000);
    cout<<c1.num_matches()<<endl;
    cout<<c2.num_matches()<<endl;
}