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

    cout << "яке пр≥звище вас ц≥кавить? " << endl; cin >> answer;

    Bill legend;

    (answer == "”крањнка") ? legend = ukrainka : (answer == "—коворода") ? legend = skovoroda : legend = vernadskiy;

    cout << "Ѕанкнота з " << answer << " ном≥налом " << legend << endl;


}