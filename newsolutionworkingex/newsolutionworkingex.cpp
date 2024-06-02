
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class auton {
    string name;
    int year;
    int price;
    double V;
public:
    auton() {
        name = "none";
        year = price = V = 0;
    }
    auton(string name, int year, int price, double V) {
        this->name = name;
        this->price = price;
        this->V = V;
        this->year = year;
    }
    void setall() {
        cout << "enter name";
        cin >> name;
        cout << "enter price";
        cin >> price;
        cout << "enter V";
        cin >> V;
        cout << "enter year";
        cin >> year;


    }
    void setName(string name) {
        this->name = name;
    }
    void setYear(int year) {
        this->year = year;
    }
    void setV(double V) {
        this->V = V;
    }
    void setPrice(int price) {
        this->price = price;
    }
    string getName()const {
        return name;
    }
    int getYear()const {
        return year;
    }
    int getPrice()const {
        return price;
    }
    double getV()const {
        return V;
    }
    void print()const {
        cout << "Name :" << name << " Price : " << price << " V : " << V << " Year:" << year << "\n";
    }
};
class automagaz {
    vector<auton> cars;
public:
    automagaz(){ 
        cars = { auton() };
    }
    automagaz(vector<auton> cars) {
        this->cars = cars;
    }
    vector<auton> getcars()const {
        return cars;
    }
    void print()const {
        for (int i = 0; i < cars.size(); i++)
        {
            cars[i].print();
        }
    }
    
    
};
void print(vector<auton> cars) {
    for (int i = 0; i < cars.size(); i++)
    {
        cars[i].print();
    }
}
bool operator>(auton a, auton b) {
    return a.getPrice() > b.getPrice();
}
bool operator<(auton a, auton b) {
    return a.getPrice() < b.getPrice();
}
bool operator>=(auton a, auton b) {
    return a.getPrice() >= b.getPrice();
}
bool operator<=(auton a, auton b) {
    return a.getPrice() <= b.getPrice();
}
bool operator==(auton a, auton b) {
    return a.getPrice() == b.getPrice();
}
int main()
{   
    
    vector<auton> cars ={
        auton("Mazda" , 2020 , 3500 , 4.2) ,
        auton("Porsh" , 2023 , 4400 , 5.7) ,
        auton("Shkoda" , 2007 , 2200 , 2.2) 
        };

    print(cars);
    sort(cars.begin(), cars.end());
    [cars] {
        for (int i = 0; i < cars.size(); i++)
        {
            cars[i].print();
        }
    };
}
