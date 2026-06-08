// contoh library
#include <iostream>
using namespace std;

string nama;

int main()
{            // program utama
    int age; // variable local
    int age1;
    int p, l, luas;
    age = 20;
    age1 = 15;
    nama = "Fauzan";

    cout << age << endl;
    cout << age1 << endl;
    cout << nama << endl;
    cout << "masukan panjang : ";
    cin >> p;
    cout << "masukan lebar : ";
    cin >> l;
    luas = p * l;
    cout << "hasilnya : " << luas << endl;
}
