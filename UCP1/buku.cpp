#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Buku
{
    string kodeBuku;
    string judul;
    string pengarang;
    Penerbit penerbit;
    int tahunTerbit;
    float harga;
    int stok;
};

int cariIndexBuku()
{
}

string tentukanKategori(float harga)
{
    if (harga >= 200000)
        return "Premium";
    else if (harga >= 100000)
        return "Menengah";
    else
        return "Ekonomis";
}

void inputDataBuku()
{
    if (jumlahBuku >= 50)
    {
        cout << "Database buku penuh! Maksimal 50 buku." << endl;
        return;
    }
}

void tampilkanSenuaBuku(Buku buku[], int jumlahBuku)
{
    if (jumlahBuku == 0)
    {
        cout << "\nBelum ada data buku!" << endl;
        return;
    }

    cout << "\n======================================" << endl;
    cout << "\n======DAFTAR SEMUA BUKU==============" << endl;
    cout << "\n======================================" << endl;

    for (int i = 0; i < ; i++)
    {
    }
}

int main()
{
    Buku buku[];

    int jumlahBuku = 0;
    int pilihan;
    do
    {
        cout << "\n...KELOLA DATA BUKU..." << endl;
        cout << "1. Tambah Buku Baru" << endl;
        cout << "2. Tampilkan Semua Buku " << endl;
        cout << "3.Cari Buku Termahal" << endl;
        cout << "4.Cari Buku Berdasarkan Kategori Harga" << endl;
        cout << "5. Kembali ke Menu Utama" << endl;
        cout << "Pilihan : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case1:
        default:
        }
    } while (pilihan != 5);
    return 0;
}