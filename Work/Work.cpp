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

    string symbol;
    int amount;

    cout << "������: "; cin >> symbol;

    cout << "����� ������� �������: "; cin >> amount;

    for (int i = 0; i < amount; i++) {
        cout << symbol;
    }
         
    return 0;
}