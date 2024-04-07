#include <iostream>
#include <cmath>
#include <ctime> 
#include <CoreWindow.h> 
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int count_of_creat_of_beer;
    int count_of_creat_of_beer_in_cars;
    int count_of_cars = 0;

    cout << "¬вед≥ть число: "; cin >> count_of_creat_of_beer;
    

    do {
        cout << "¬вед≥ть число: "; cin >> count_of_creat_of_beer_in_cars;
        count_of_creat_of_beer -= count_of_creat_of_beer_in_cars;
        count_of_cars++;
    } while (count_of_creat_of_beer > 0);

    cout << count_of_cars;


    return 0;
}