#include <iostream>
#include <cmath>
#include <ctime> 
#include <CoreWindow.h> 
#include <Windows.h>
using namespace std;

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[0;36m"
#define ORANGE "\033[0;33m"
#define PURPLE "\033[0;35m"
#define WHITE "\033[1;37m"
#define GREY "\033[1;30m"
#define PINK "\033[1;35m"
#define BLACK "\033[0;30m"


enum Bill {
    
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number = 1;
    int counter = 0;

    do {
        cout << "¬вед≥ть число: "; cin >> number;
        if (number == 0) break;
        counter++;
    } while (number != 0);


    cout << "Ѕуло введено " << counter << " „исел";

         
    return 0;
}