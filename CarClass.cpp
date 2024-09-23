// Passing objects to function 
#include<bits/stdc++.h>
using namespace std;
class Car{
public:
    string name;
    int price;
    int seats;
    string type;
};
// We make a function and pass object in it 
void print_car_details(Car t)
{
    cout<<t.name<<" ";
    cout<<t.price<<" ";
    cout<<t.seats<<" ";
    cout<<t.type<<endl;
}
int main()
{
    Car c1;
    c1.name="Honda City";
    c1.price=1500000;
    c1.seats=5;
    c1.type="Sedan";

    Car c2;
    c2.name="Kia Seltos";
    c2.price=1600000;
    c2.seats=5;
    c2.type="SUV";

    print_car_details(c1);
    print_car_details(c2);
}