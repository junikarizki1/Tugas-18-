#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int bpp = 2000000;
    double jmlSks, dMahasiswa, biayaPerSks, ttlBiayaSks, ttlBiayaKuliah;
    dMahasiswa = 200000;
    biayaPerSks = 115000;

    cout <<"Program Menghitung Biaya Kuliah Mahasiswa\n";
    cout <<"==========================================\n";
    cout <<"By : Junika Rizki\n\n";
    cout <<"Masukkan Jumlah Sks ";
    cin >>jmlSks;
    ttlBiayaSks = jmlSks * biayaPerSks;
    ttlBiayaKuliah = bpp+  dMahasiswa + ttlBiayaSks;
    cout <<setprecision(10);
    cout <<"BPP = Rp."<<bpp<<endl;
    cout <<"Dana Kemahasiswaan = Rp."<<dMahasiswa<<endl;
    cout <<"Jumlah Sks Mahasiswa = "<<jmlSks <<" Sks"<<endl;
    cout <<"Biaya Per Sks = Rp."<<biayaPerSks<<endl;
    cout <<"Total Biaya Sks Mahasiswa = Rp."<<ttlBiayaSks <<endl;
    cout <<"Total Biaya Kuliah Mahasiswa = Rp."<<ttlBiayaKuliah <<endl;
    return 0;

}
