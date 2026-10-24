#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main () {
    int password = 112233, user = 1267050145, menu1, menu2;
    float nilai1, nilai2, nilaitotal;
    string nama, nim, prodi, fakultas;
    bool ukt = true;
    cout << "------SELAMAT DATANG DI LAYANAN AKADEMIK------"<< endl;
    cout << "Masukkan Username Anda :";
    cin >> user;
    cout << "Masukkan Password Anda :";
    cin >> password;
    if (user != 1267050145 || password != 112233) {
        cout << "DATA TIDAK VALID, SILAHKAN MASUKKAN ULANG !" ;
    }else { awal:
        cout << "PILIH MENU :"<< endl;
        cout << "1. Data Mahasiswa" << endl;
        cout << "2. Menu KRS" << endl;
        cout << "3.Nilai" << endl;
        cout << "4. Menu Jadwal" << endl;
        cout << "5.Keuangan" << endl;
        cout <<"6.Keluar" <<  endl;
        cout << "Masukkan Menu :" << endl;
        cin >> menu2;
        cout << "Apakah Anda Sudah Melakukan Pembayaran UKT? (sudah = 1 belum = 0): ";
        cin >> ukt;
        if (ukt == false) {
            cout << "Mohon Maaf, Silahkan Selesaikan Pembayaran UKT"<< endl;
         goto awal;
         } else {
        switch (menu2) { 
        case 1:
            cout << "Menu Data Mahasiswa" << endl;
            cout << "1. Nama" << endl;
            cout << "2. NIM" << endl;
            cout << "3. Prodi" << endl;
            cout << "4. Fakultas" << endl;
            cout << "Silahkan Pilih Menu (1-4):";
            cin >> menu1;
            switch (menu1){
            case 1:
            cout << "Nama : Syarifatul 'Ulya" << endl;
            break;
            case 2:
            cout << "NIM : 1267050145" << endl;
            break;
            case 3:
            cout << "Prodi : Teknik Informatika" <<  endl;
            break;
            case 4:
            cout <<"Fakultas : Sains dan Teknologi" << endl;
            break;
            default:
            cout << "Pilihan Tidak Terrsedia";
            break;
        }
        break;
        case 2:
        cout << "1. Daftar Mata Kuliah" << endl;
        break;
        case 3:
        cout << "Masukkan Nilai UTS Anda :";
        cin >> nilai1;
        cout << "Masukkan Nilai UAS Anda:";
        cin >> nilai2;
        if (nilai1 < 0 || nilai2 < 0 || nilai1 > 100 || nilai2 > 100) {
        cout << "Nilai Tidak Valid" << endl;
        } else {
            nilaitotal = (nilai1 + nilai2)/2;
            cout << "Nilai Anda: " << nilaitotal << endl;
        }
        break;
        case 4: 
        cout << "Mata Kuliah" << endl;
        cout << "Dosen" << endl;
        cout <<"Jam" << endl;
        cout << "Ruangan "<< endl;
        break;
        case 5:
        cout << "Anda Sudah Melakukan Pembayaran, Terimakasih" << endl;
        break;
        case 6:
        cout << "Terima Kasih " << endl;
        break;
        default:
        cout << "Nomor Tidak valid" << endl;
    }
    } 
}
}

