#include <iostream>
#include <cmath>
#include <ctime> 
#include <CoreWindow.h> 
#include <Windows.h>

using namespace std;

enum Bill {
    
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    

    srand(time(nullptr));

    int num1 = 1 + rand() % 10;

    cout << num1 << endl;

    cout << "" << endl;

    int num2 = -5 + rand() % 11;

    cout << num2 << endl;

    cout << "" << endl;

    int num3 = rand() % 2;

    cout << num3 << endl;





    return 0;


}