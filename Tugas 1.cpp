#include <iostream>

using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int penjumlahanArray(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i];
    }
    return total;
}

double rata_rataArray(int arr[], int n) {
    int total = penjumlahanArray(arr, n);
    double rata_rata = (double) total / n;
    return rata_rata;
}



int main() {
    int x, y;
    cout << "Penjumlahan 2 Bilangan "<<endl;
    cout << "Bilangan ke-1: ";
    cin >> x;
    cout << "Bilangan ke-2: ";
    cin >> y;
    int hasilTambah = tambah(x, y);
    cout << "Hasil penjumlahan: " << hasilTambah << endl;
    cout << "-------------------------- " << endl;
////////////////////////////////////////////////////////////////
    cout << "\nPengurangan 2 Bilangan"<<endl;
    cout << "Bilangan ke-1: ";
    cin >> x;
    cout << "Bilangan ke-2: ";
    cin >> y;
    int hasilKurang = kurang(x, y);
    cout << "Hasil pengurangan: " << hasilKurang << endl;
    cout << "-------------------------- "  << endl;
///////////////////////////////////////////////////////////////

//penjumlahan dan rata rata array
    int n;
    cout << "\nFungsi Array"<<endl;
    cout << "Masukkan jumlah elemen : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    int total = penjumlahanArray(arr, n);
    double hasilRataArray = rata_rataArray(arr, n);

    cout << "--------------------------" << endl;
    cout << "Total : " << total << endl;
    cout << "Rata-rata : " << hasilRataArray << endl;

    return 0;
}
