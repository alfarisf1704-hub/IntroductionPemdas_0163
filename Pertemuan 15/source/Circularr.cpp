/**
 * @mainpage Documentation Circular Queues
 *
 * @section Introduction
 * Project ini merupakan project struktur data
 * menggunakan struktur data queues dengan pendekatan circular arrays.
 *
 * @section Operations
 * Project ini memiliki beberapa operasi antara lain:
 * 1. Insert
 * 2. Delete
 * 3. Display
 *
 * @section Cara Penggunaan
 * Berikut beberapa menu yang bisa digunakan:
 * 1. en queue
 * 2. de queue
 * 3. display
 * 4. exit
 *
 * @author Profil
 * - nama : Fauzan Al Faris
 * - nim  : 20250140163
 * - kelas: D

 * @brief
 * @version 0.1
 * @date 2026-06-08
 *
 *
 * @copyright fauzan.al.ft25@mail.umy.ac.id (d) 2025
 *
 */
#include <iostream>
using namespace std;
/**
 * @class Queues
 * @brief class ini untuk operasi lengkap queus
 *
 *
 */

class Queues
{
private:
    int FRONT;          ///< variable private front untuk menyimpan posisi depan antrian
    int REAR;           ///< variable private rear untuk menyimpan posisi belakang antrian
    int max = 5;        ///< variable private max untuk menyimpan ukuran maksimum antrian
    int queue_array[5]; ///< variable private queue_array untuk menyimpan elemen antrian

public:
    /**
     * @brief Construct a new Queues object
     * set default queues null
     * with front = -1 and rear = -1
     */
    Queues()
    {
        FRONT = -1;
        REAR = -1;
    }

    /**
     * @brief method untuk memasukkan data dalam antrian
     * data dimasukkan dalam variable queue_array
     */
    void insert()
    {
        int num; ///< variable num untuk menyimpan nilai
        cout << "Enter a Number : ";
        cin >> num;
        cout << endl;

        // apakah antrian penuh
        if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1))
        {
            cout << "\nQueue overflow\n";
            return;
        }

        // apakah antrian kosong
        if (FRONT == -1)
        {
            FRONT = 0;
            REAR = 0;
        }
        else
        {
            // jika REAR berada di posisi terakhir array, kembali ke awal array
            if (REAR == max - 1)
                REAR = 0;
            else
                REAR = REAR + 1;
        }
        queue_array[REAR] = num;
    }

    /**
     * @brief method untuk menghapus data dalam antrian
     * data dihapuskan dari dalam variable queue_array
     */
    void remove()
    {
        // apakah antrian kosong
        if (FRONT == -1)
        {
            cout << "\nQueue underflow\n";
            return;
        }
        cout << "\nThe element deleted from the queue is : " << queue_array[FRONT] << "\n";

        // cek jika antrian hanya memiliki satu element
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            // jika element yg dihapus berada di posisi terakhir array, maka kembali ke awal array
            if (FRONT == max - 1)
                FRONT = 0;
            else
                FRONT = FRONT + 1;
        }
    }

    /**
     * @brief method untuk menampilkan data dalam antrian
     * data ditampilkan yang berada dalam variable queue_array
     */

    void display()
    {
        int FRONT_Position = FRONT; ///< variable front_position untuk menandakan posisi element pertama pada variable front
        int REAR_Position = REAR;   ///< variable rear_position untuk menandakan posisi element terakhir pada variable rear

        // apakah antrian kosong
        if (FRONT_Position = -1)
        {
            cout << "\nQueue is Empty\n";
            return;
        }

        cout << "\nElements in the queue are ...\n";

        // jika FRONT_position <= REAR_position, iterasi dari FRONT hingga REAR
        if (FRONT_Position <= REAR_Position)
        {
            while (FRONT_Position <= REAR_Position)
            {
                cout << queue_array[FRONT_Position] << " ";
                FRONT_Position++;
            }
            cout << endl;
        }
        else
        {
            // jika FRONT_position <= REAR_position , iterasi dari front hingga akhir array
            while (FRONT_Position <= max - 1)
            {
                cout << queue_array[FRONT_Position] << " ";
                FRONT_Position++;
            }
            FRONT_Position = 0;

            // iterasi dari awal array hingga rear
            while (FRONT_Position <= REAR_Position)
            {
                cout << queue_array[FRONT_Position] << " ";
                FRONT_Position++;
            }
            cout << endl;
        }
    }
};

/**
 * @brief method utama untuk menjalankan program
 *
 * @return int
 */
int main()
{
    Queues q; ///< objek untuk menggunakan member yang ada pada class queues
    char ch;  ///< variable ch untuk menyimpan pilihan pada menu yang diberikan

    while (true)
    {
        try
        {
            cout << "Menu" << endl;
            cout << "1. implement insert operation " << endl;
            cout << "2. implement delete operation " << endl;
            cout << "3. Display Values " << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice (1-4) : " << endl;
            cin >> ch;
            cout << endl;

            switch (ch)
            {
            case '1':
            {
                q.insert();
                break;
            }
            case '2':
            {
                q.remove();
                break;
            }
            case '3':
            {
                q.display();
                break;
            }
            case '4':
            {
                return 0;
            }
            default:
            {
                cout << "Invalid option!" << endl;
                break;
            }
            }
        }
        catch (exception &e)
        {
            cout << " Check for the values entered!." << endl;
        }
    }
    return 0;
}
