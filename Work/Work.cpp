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
    int sum = 0;

    cout << "¬веди число: "; cin >> number;

    for (int i = 0; i < number; i++) {
        
            if (i % 2 != 0){ 
                sum += i;
            }
    }
    cout << sum;
         
    return 0;
}