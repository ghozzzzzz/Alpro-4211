#include <iostream>

using namespace std;

int tambah(int a,int b){
    if (a==0){
        return b;
    } else if(b==0){
        return a;
    } else{
        return  1 + tambah(a,b-1);
    }
    }

int kurang(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return kurang(a - 1, b - 1);
    }
}

int perkalian(int a, int b) {
    if (b == 0) {
        return 0;
    } else {
        return a + perkalian(a, b - 1);
    }
}

int pembagian(int a, int b) {
    if (a < b) {
        return 0;
    } else {
        return 1 + pembagian(a - b, b);
    }
}

int pangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } else {
        return a * pangkat(a, b - 1);
    }
}

int main()
{
    cout << "Hasil penjumlahan: " << tambah(9, 2)<<endl;
    cout << "Hasil pengurangan: " << kurang(9, 2)<<endl;
    cout << "Hasil perkalian  : " << perkalian(9, 2)<<endl;
    cout << "Hasil pembagian  : " << pembagian(9, 2)<<endl;
    cout << "Hasil pangkat    : " << pangkat(9, 2)<<endl;
    return 0;
}
