#include <iostream>

using namespace std;

enum Gear { Neutral, Satu, Dua, Tiga, Empat, Lima };

int main()
{
Gear SaatIni = Gear::Dua;
cout << "Gear saat ini: ";

switch (SaatIni)
{
    case Gear::Neutral:
        cout << "Netral" << endl;
        break;
    case Gear::Satu:
        cout << "Gigi Pertama" << endl;
        break;
    case Gear::Dua:
        cout << "Gigi Kedua" << endl;
        break;
    case Gear::Tiga:
        cout << "Gigi Ketiga" << endl;
        break;
    case Gear::Empat:
        cout << "Gigi Keempat" << endl;
        break;
    case Gear::Lima:
        cout << "Gigi Kelima" << endl;
        break;
}

return 0;
}
