#include <iostream>
using namespace std;

// Fungsi untuk menampilkan menu
void tampilkanMenu() {
    cout << "============================\n";
    cout << "       KALKULATOR          \n";
    cout << "============================\n";
    cout << "Pilih operasi:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    // cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "5. Keluar\n";
}

// Fungsi utama
int main() {
    int pilihan;
    double angka1, angka2, hasil;

    do {
        tampilkanMenu();
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Masukkan angka pertama: ";
            cin >> angka1;
            cout << "Masukkan angka kedua: ";
            cin >> angka2;
        }

        switch (pilihan) {
            case 1:
                hasil = angka1 + angka2;
                cout << "Hasil penjumlahan: " << hasil << endl;
                break;
            case 2:
                hasil = angka1 - angka2;
                cout << "Hasil pengurangan: " << hasil << endl;
                break;
            case 3:
                hasil = angka1 * angka2;
                cout << "Hasil perkalian: " << hasil << endl;
                break;
            case 4:
                if (angka2 != 0) {
                    hasil = angka1 / angka2;
                    cout << "Hasil pembagian: " << hasil << endl;
                } else {
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan.\n";
                }
                break;
            case 5:
                cout << "Terima kasih telah menggunakan kalkulator!\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
        }

        cout << "\n";
    } while (pilihan != 5);

    return 0;
}
