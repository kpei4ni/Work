#include <iostream>
#include <Windows.h>
using namespace std;


enum Bill{
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

    int answer;
    Bill legend;

    cout << "���� ��� �������? " << endl; cin >> answer;

    
    switch (answer) {
        case 20: legend = franko; break;
        case 50: legend = grushevskiy; break;
        case 100: legend = shevchenko; break;
        case 200: legend = ukrainka; break;
        case 500: legend = skovoroda; break;
        case 1000: legend = vernadskiy; break;
    }

    cout << "�� ������� " << answer << " ����������� ";

    switch (legend) {
        case franko:  cout << "���� ������" << endl; break;
        case grushevskiy:  cout << "������� �����������" << endl; break;
        case shevchenko:  cout << "����� ��������" << endl; break;
        case ukrainka:  cout << "���� ������� (������ �����)" << endl; break;
        case skovoroda:  cout << "������� ���������" << endl; break;
        case vernadskiy:  cout << "��������� �����������" << endl; break;
    }


}