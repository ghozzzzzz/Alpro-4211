
#include <iostream>
using namespace std;

struct Jenis
{
    string merk,type,harga;
    int tahun;
};

int main()
{
    Jenis sepeda;
    Jenis *psepeda = &sepeda;

    psepeda->merk = "TsunamiSNM100";
    psepeda->type = "Sepeda Fixie";
    psepeda->tahun= 2024;
    psepeda->harga= "22.000.000";

    cout << " merek\t : " << psepeda->merk << endl;
    cout << " type\t : " << psepeda->type << endl;
    cout << " tahun\t : "<< psepeda->tahun << endl;
    cout << " harga\t : "<< psepeda->harga<< endl;
    return 0;
}
