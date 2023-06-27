#include <iostream>
using namespace std;

struct Jenis
{
    string merk,type,harga;
    int tahun;
};
Jenis sepeda;

int main()
{
    sepeda.merk = "TsunamiSNM100";
    sepeda.type = "Sepeda Fixie";
    sepeda.tahun= 2024;
    sepeda.harga= "21.000.000";
    cout << " merek\t : " << sepeda.merk << endl;
    cout << " type\t : " << sepeda.type << endl;
    cout << " tahun\t : "<< sepeda.tahun << endl;
    cout << " harga\t : "<< sepeda.harga<< endl;
    return 0;
}
