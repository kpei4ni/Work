#include <iostream>
#include <Windows.h>
using namespace std;

enum Bill {
    franko = 20,
    grushevskiy = 50,
    shevchenko = 100,
    ukrainka = 200,
    skovoroda = 500,
    vernadskiy = 1000
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string answer;

    cout << "��� ������� ��� ��������? " << endl; cin >> answer;

    Bill legend;

    (answer == "�������") ? legend = ukrainka : (answer == "���������") ? legend = skovoroda : legend = vernadskiy;

    cout << "�������� � " << answer << " �������� " << legend << endl;


}