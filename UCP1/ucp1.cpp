#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Pelanggan
{
    string kodePelanggan;
    string nama;
    string alamat;
    string noTelepon;
};

// fungsi cari pelanggan berdasarkan alamat (kota)
int cariIndexPelanggan(Pelanggan pelanggan[], int jumlahPelanggan, string kota)
{
    for (int i = 0; i < jumlahPelanggan; i++)
    {
        if (pelanggan[i].alamat == kota)
        {
            return i;
        }
    }
    return -1;
}

// fungsi input pelanggan
void inputIndexPelanggan(Pelanggan pelanggan[], int &jumlahPelanggan)
{
    if (jumlahPelanggan >= 50)
    {
        cout << "Database pelanggan penuh! Maksimal 50 pelanggan." << endl;
        return;
    }

    cout << "\nMasukkan data pelanggan ke-" << jumlahPelanggan + 1 << endl;
    cout << "Kode Pelanggan : ";
    cin >> pelanggan[jumlahPelanggan].kodePelanggan;

    cout << "Nama : ";
    cin >> pelanggan[jumlahPelanggan].nama;

    cout << "Alamat (kota) : ";
    cin >> pelanggan[jumlahPelanggan].alamat;

    cout << "No Telepon : ";
    cin >> pelanggan[jumlahPelanggan].noTelepon;

    jumlahPelanggan++;
}

// tampilkan semua pelanggan
void tampilkanSemuaPelanggan(Pelanggan pelanggan[], int jumlahPelanggan)
{
    if (jumlahPelanggan == 0)
    {
        cout << "\nBelum ada data pelanggan!" << endl;
        return;
    }

    cout << "\n=============================" << endl;
    cout << " DAFTAR SEMUA PELANGGAN " << endl;
    cout << "=============================" << endl;

    for (int i = 0; i < jumlahPelanggan; i++)
    {
        cout << "\nPelanggan ke-" << i + 1 << endl;
        cout << "Kode   : " << pelanggan[i].kodePelanggan << endl;
        cout << "Nama   : " << pelanggan[i].nama << endl;
        cout << "Alamat : " << pelanggan[i].alamat << endl;
        cout << "Telepon: " << pelanggan[i].noTelepon << endl;
    }
}

int main()
{
    Pelanggan pelanggan[50]; // FIX: kasih ukuran
    int jumlahPelanggan = 0;
    int pilihan;

    do
    {
        cout << "\n--- KELOLA DATA PELANGGAN ---" << endl;
        cout << "1. Tambah Pelanggan Baru" << endl;
        cout << "2. Tampilkan Semua Pelanggan" << endl;
        cout << "3. Cari Pelanggan Berdasarkan Kota" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            inputIndexPelanggan(pelanggan, jumlahPelanggan);
            break;

        case 2:
            tampilkanSemuaPelanggan(pelanggan, jumlahPelanggan);
            break;

        case 3:
        {
            string kota;
            cout << "Masukkan kota yang dicari: ";
            cin >> kota;

            int index = cariIndexPelanggan(pelanggan, jumlahPelanggan, kota);

            if (index != -1)
            {
                cout << "\nData ditemukan:\n";
                cout << "Nama : " << pelanggan[index].nama << endl;
                cout << "Telepon : " << pelanggan[index].noTelepon << endl;
            }
            else
            {
                cout << "Data tidak ditemukan!" << endl;
            }
            break;
        }

        case 4:
            cout << "Keluar program..." << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
        }

    } while (pilihan != 4);

    return 0;
}