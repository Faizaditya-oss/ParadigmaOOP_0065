#include <iostream>
#include <string>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanSpesifikasi() {
        
        cout << "  Data Spesifikasi Barang" << endl;
        cout << "-------------------------------------" << endl;
        cout << "Nama             : " << nama << endl;
        cout << "Jumlah           : " << jumlah << " pcs" << endl;
        cout << "Kategori         : " << kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
        
    }
};

int main() {
    Barang elektronik;
    elektronik.nama = "Laptop ASUS VivoBook";
    elektronik.jumlah = 25;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "15-01-2024";

    Barang nonElektronik;
    nonElektronik.nama = "Meja Kayu Jati";
    nonElektronik.jumlah = 10;
    nonElektronik.kategori = "Furnitur";
    nonElektronik.tanggalProduksi = "20-03-2024";

    cout << endl;
    cout << ">> Kategori Barang (elektronik)" << endl;
    elektronik.tampilkanSpesifikasi();

    cout << endl;
    cout << ">> Kategori Barang (nonElektronik)" << endl;
    nonElektronik.tampilkanSpesifikasi();

    cout << endl;

    return 0;
}
