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
    

    srand(time(nullptr));

    int gess;

    int r_num = 1 + rand() % 12;

    cout << "¬вед≥ть чисало в≥д 1 до 12: "; cin >> gess;

    (gess == r_num) ? cout << "¬и вгадали ваше число " << endl : cout << "“и лох!" << endl;

    switch (r_num) {
        case 1: cout << RED << "1" << WHITE << endl; break;
        case 2: cout << GREEN << "2" << WHITE << endl; break;
        case 3: cout << BLUE << "3" << WHITE << endl; break;
        case 4: cout << YELLOW << "4" << WHITE << endl; break;
        case 5: cout << CYAN << "5" << WHITE << endl; break;
        case 6: cout << ORANGE << "6" << WHITE << endl; break;
        case 7: cout << PURPLE << "7" << WHITE << endl; break;
        case 8: cout << WHITE << "8" << WHITE << endl; break;
        case 9: cout << GREY << "9" << WHITE << endl; break;
        case 10: cout << GREY << "10" << WHITE << endl; break;
        case 11: cout << PINK << "11" << PINK << endl; break;
        case 12: cout << BLACK << "12" << BLACK << endl; break;
    }






    return 0;


}