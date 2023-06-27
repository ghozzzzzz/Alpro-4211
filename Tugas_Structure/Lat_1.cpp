#include <iostream>

using namespace std;

struct PersegiPanjang {
    double panjang;
    double lebar;
};

double hitungLuas(const PersegiPanjang& pp) {
    return pp.panjang * pp.lebar;
}

struct Lingkaran {
    double jariJari;
};

double hitungLuas(const Lingkaran& lingkaran) {
    return 22.0/7 * lingkaran.jariJari * lingkaran.jariJari;
}

struct Kerucut {
    double jariJari;
    double tinggi;
};

double hitungVolume(const Kerucut& kerucut) {
    double phi = 3.14;
    return 1.0/3.0 * phi * kerucut.jariJari * kerucut.jariJari * kerucut.tinggi;
}

struct Bola {
    double jariJari;
};

double hitungVolume(const Bola& bola) {
    double phi = 3.14;
    return 4.0/3.0 * phi * bola.jariJari * bola.jariJari * bola.jariJari;
}

int main() {
    PersegiPanjang pp;
    pp.panjang = 5.0;
    pp.lebar = 3.0;

    Lingkaran lingkaran;
    lingkaran.jariJari = 14.0;

    Kerucut kerucut;
    kerucut.jariJari = 7.0;
    kerucut.tinggi = 10.0;

    Bola bola;
    bola.jariJari = 5.0;

    double luasPersegiPanjang = hitungLuas(pp);
    cout << "Luas persegi panjang: " << luasPersegiPanjang << endl;

    double luasLingkaran = hitungLuas(lingkaran);
    cout << "Luas lingkaran: " << luasLingkaran << endl;

    double volumeKerucut = hitungVolume(kerucut);
    cout << "Volume kerucut: " << volumeKerucut << endl;

    double volumeBola = hitungVolume(bola);
    cout << "Volume bola: " << volumeBola << endl;

    return 0;
}
