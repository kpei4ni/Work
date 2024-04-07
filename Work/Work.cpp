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

    cout << "ׁטלגמכ: "; cin >> symbol;

    cout << "ֲגוהט ך³כüך³סעü סטלגמכ³ג: "; cin >> amount;

    for (int i = 0; i < amount; i++) {
        cout << symbol;
    }
         
    return 0;
}