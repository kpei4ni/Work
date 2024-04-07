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

    int number;
    int factorial = 1;

    cout << "¬веди число: "; cin >> number;

    for (int i = 1; i < number + 1; i++) {
        factorial *= i;
    }

    cout << factorial;

    return 0;
}