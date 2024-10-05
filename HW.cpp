#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
#include <iomanip>
using namespace std;

struct Car {
    string marka;            
    string model;            
    int year;                
    int price;               
    bool isNegotiable;      
    string engine;           
    string color;           
    int numOwners;           
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<Car> automobile;
    bool more = true;

    while (more) {
        Car car;
        cout << "Марка автомобіля: ";
        cin >> car.marka;

        cout << "Модель автомобіля: ";
        cin >> car.model;

        cout << "Рік випуску: ";
        cin >> car.year;

        cout << "Ціна: ";
        cin >> car.price;

        cout << "Є торг? (так/ні): ";
        string negotiable;
        cin >> negotiable;
        car.isNegotiable = (negotiable == "так");

        cout << "Тип двигуна: ";
        cin >> car.engine;

        cout << "Колір автомобіля: ";
        cin >> car.color;

        cout << "Кількість власників: ";
        cin >> car.numOwners;

        automobile.push_back(car);
        string response;
        cout << "Додати ще один автомобіль? (так/ні): ";
        cin >> response;
        more = (response == "так") ? true : false;
        
    }
   
    cout << "\n";


    cout << left << setw(12) << "Марка"
        << setw(12) << "Модель"
        << setw(6) << "Рік"
        << setw(8) << "Ціна"
        << setw(6) << "Торг"
        << setw(15) << "Двигун"
        << setw(10) << "Колір"
        << setw(10) << "Власники" << endl;



    for (const auto& car : automobile) {
        cout << left
            << setw(12) << car.marka
            << setw(12) << car.model
            << setw(6) << car.year
            << setw(8) << car.price
            << setw(6) << (car.isNegotiable ? "Так" : "Ні")
            << setw(15) << car.engine
            << setw(10) << car.color
            << setw(10) << car.numOwners << endl;
    }

    return 0;
}