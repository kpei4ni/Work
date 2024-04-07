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

    int length_cotton;
    int length_pillow;
    int counter = 0;

    cout << "¬веди число: "; cin >> length_cotton;
    cout << "¬веди число: "; cin >> length_pillow;

    while (length_cotton > length_pillow) {
        length_cotton -= length_pillow;
        counter += 1;
    }

    cout << counter << endl;


    return 0;
}