#include <iostream>
#include <string>
using namespace std;

int pokok(int jam){
    return 7500 * jam;
}

int lembur(int jam){
    int gajiLembur;
    // Jika jam kerja lebih dari 8 jam
    if (jam > 8){
            gajiLembur = ((jam - 8) * 7500) * 1.5; // Gaji lembur 1.5 dari gaji pokok
            return gajiLembur;
    } else {
        return gajiLembur = 0;
    }
}

int makan(int jam){
    int uangMakan;
    // Jika jam kerja 9 jam atau lebih
    if (jam >= 9) {
        uangMakan = 10000;
    } else {
        uangMakan = 0;
    }
    return uangMakan;
}

int transport(int jam){
    int uangTransportLembur;
    // Jika jam kerja 9 jam atau lebih
    if (jam >= 10) {
        uangTransportLembur = 13000;
    } else {
        uangTransportLembur = 0;
    }
    return uangTransportLembur;
}

int main(){
    string nama, nip, jamKerja2;
    int jamKerja, totalGaji;

    cout << "======= Selamat datang di PT. XYZ =======\n" << endl;
    cout << "Isi data berikut untuk identifikasi diri" << endl;
    do {
        cout << "NIP :\n=> ";
        getline(cin, nip);
        if (nip == "") {
            cout << "Input kosong. Mohon isi NIP anda\n" << endl;
        }
    } while (nip == "");

    do {
        cout << "Nama :\n=> ";
        getline(cin, nama);
        if (nama == "") {
            cout << "Input kosong. Mohon isi nama anda\n" << endl;
        }
    } while (nama == "");

    do {
        cout << "Jumlah Jam Kerja Anda (angka) :\n=> ";
        getline(cin, jamKerja2);
        if (jamKerja2 == "") {
            cout << "Input kosong. Mohon isi Jumlah Jam Kerja anda\n" << endl;
        }
    } while (jamKerja2 == "");
    jamKerja = stoi(jamKerja2); // Konversi String ke Integer

    totalGaji = pokok(jamKerja) + lembur(jamKerja) + makan(jamKerja) + transport(jamKerja);

    cout << "\n======= Informasi Data Diri Karyawan =======\n" << endl;
    cout << "NIP        : " << nip << endl;
    cout << "Nama       : " << nama << endl;
    cout << "Jam Kerja  : " << jamKerja << " jam"<< endl;
    cout << "\nList gaji harian berdasarkan " << jamKerja << " jam kerja per hari" << endl;
    cout << "1. Gaji Pokok           : Rp." << pokok(jamKerja) << "/hari" << endl;
    cout << "2. Uang Lembur (> 8 jam): Rp." << lembur(jamKerja) << "/hari" << endl;
    cout << "3. Uang Makan (> 8 jam) : Rp." << makan(jamKerja) << "/hari" << endl;
    cout << "4. Gaji Lembur (> 9 jam): Rp." << transport(jamKerja) << "/hari" << endl;
    cout << "===============================================" << endl;
    cout << "=> Total Gaji : Rp." << totalGaji << "/hari" << endl;

    return 0;
}
