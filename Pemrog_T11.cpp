#include <iostream>
#include <string>
using namespace std;

void hitungSegiEmpat();
void hitungSegiTiga();
void hitungLingkaran();
void tampilkanMenu();

const double PI = 3.14;

int main() {
    int pilihan;
    
    do {
        tampilkanMenu();
        cout << "Masukkan pilihan Anda (1-4): ";
        cin >> pilihan;
        
        switch(pilihan) {
            case 1:
                hitungSegiEmpat();
                break;
            case 2:
                hitungSegiTiga();
                break;
            case 3:
                hitungLingkaran();
                break;
            case 4:
                cout << "Makasihhh!!!" << endl;
                break;
            default:
                cout << "Error: Pilihan tidak valid! Silakan pilih 1-4." << endl;
                break;
        }
        
        if(pilihan != 4) {
            cout << "\nTekan enter untuk melanjutkan...";
            cin.ignore();
            cin.get();
        }
        
    } while(pilihan != 4);
    
    return 0;
}

void tampilkanMenu() {
    cout << "\n\n=== Menghitung Luas Bangun Datar ===" << endl;
    cout << "1. Segi Empat" << endl;
    cout << "2. Segi Tiga" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "4. Keluar" << endl;
    cout << "=============================================" << endl;
}

void hitungSegiEmpat() {
    double panjang, lebar, luas;
    
    cout << "\n=== Luas Segi Empat ===" << endl;
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    
    if(panjang <= 0 || lebar <= 0) {
        cout << "Error: Panjang dan lebar harus positif!" << endl;
    } else {
        luas = panjang * lebar;
        cout << "Luas segi empat = " << panjang << " × " << lebar << " = " << luas << endl;
    }
}

void hitungSegiTiga() {
    double alas, tinggi, luas;
    
    cout << "\n=== Menghitung Luas Segi Tiga ===" << endl;
    cout << "Masukkan alas: ";
    cin >> alas;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;
    
    if(alas <= 0 || tinggi <= 0) {
        cout << "Error: Alas dan tinggi harus positif!" << endl;
    } else {
        luas = 0.5 * alas * tinggi;
        cout << "Luas segi tiga = 1/2 × " << alas << " × " << tinggi << " = " << luas << endl;
    }
}

void hitungLingkaran() {
    double jari_jari, luas;
    
    cout << "\n=== Menghitung Luas Lingkaran ===" << endl;
    cout << "Masukkan jari-jari: ";
    cin >> jari_jari;
    
    if(jari_jari <= 0) {
        cout << "Error: Jari-jari harus positif!" << endl;
    } else {
        luas = PI * jari_jari * jari_jari;
        cout << "Luas lingkaran = π × " << jari_jari << "² = " << luas << endl;
        cout << "Nilai π yang digunakan: " << PI << endl;
    }
}
