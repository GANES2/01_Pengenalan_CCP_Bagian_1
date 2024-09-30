#include <iostream>
using namespace std;

/*int main() {
    // Deklarasi variabel
    float a, b;

    // Input dari user
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    // Operasi matematika
    cout << "Hasil penjumlahan: " << a + b << endl;
    cout << "Hasil pengurangan: " << a - b << endl;
    cout << "Hasil perkalian: " << a * b << endl;

    // Kondisi untuk pembagian dengan nol
    if (b != 0) {
        cout << "Hasil pembagian: " << a / b << endl;
    } else {
        cout << "Tidak bisa membagi dengan 0" << endl;
    }

    return 0;
}*/

#include <iostream>
using namespace std;

/*// Fungsi untuk konversi angka menjadi teks
string angka_ke_teks(int angka) {
    string satuan[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh",
                       "Sebelas", "Dua Belas", "Tiga Belas", "Empat Belas", "Lima Belas", "Enam Belas", "Tujuh Belas",
                       "Delapan Belas", "Sembilan Belas"};
    string puluhan[] = {"", "", "Dua Puluh", "Tiga Puluh", "Empat Puluh", "Lima Puluh", "Enam Puluh",
                        "Tujuh Puluh", "Delapan Puluh", "Sembilan Puluh"};

    if (angka < 20) {
        return satuan[angka];
    } else if (angka < 100) {
        return puluhan[angka / 10] + (angka % 10 != 0 ? " " + satuan[angka % 10] : "");
    } else if (angka == 100) {
        return "Seratus";
    } else {
        return "Angka di luar jangkauan";
    }
}

int main() {
    int angka;

    // Input angka dari user
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    // Output hasil konversi angka ke teks
    cout << angka << ": " << angka_ke_teks(angka) << endl;

    return 0;
}

*/
#include <iostream>
using namespace std;

/*// Fungsi untuk mencetak pola mirror
void mirror_pattern(int n) {
    for (int i = n; i > 0; i--) {
        // Bagian kiri
        for (int j = i; j > 0; j--) {
            cout << j << " ";
        }
        // Bagian tengah (*)
        cout << "* ";
        // Bagian kanan
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;  // Pindah ke baris berikutnya
    }
}

int main() {
    int angka;

    // Input angka dari user
    cout << "Masukkan angka: ";
    cin >> angka;

    // Cetak pola mirror
    mirror_pattern(angka);

    return 0;
}
/*




