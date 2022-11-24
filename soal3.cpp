#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int jmlHari,kamar = 250000, dokter = 65000;
    float pot, biayaKamar, ttlBiayaKamar, biayaDokter, ttl;
    
    
    
    cout <<"<!--Soal No. 3-->\n";
    cout <<"Program Menghitung Biaya Rawat Inap\n";
    cout <<"Created By : Junika Rizki\n\n";
    cout <<"*************************************************************\n";
    cout <<"Masukkan Jumlah Hari Rawat Inap ";
    cin >>jmlHari;
    biayaKamar = jmlHari * kamar;
    pot = biayaKamar * 0.1;
    ttlBiayaKamar = biayaKamar - pot;
    biayaDokter = jmlHari * dokter; 
    ttl = ttlBiayaKamar + biayaDokter;
    cout <<setprecision(10); //Jika menggunaka float, sebaiknya aktifkan ini dan <iomanip>
    cout <<"_____________________________________________________________\n";
    cout <<"| Lama Hari Rawat Inap Pasien            = "<<jmlHari <<" Hari"<<endl;
    cout <<"| Biaya Kamar Per Hari                   = Rp."<<kamar <<endl;
    cout <<"| Biaya Kunjungan Dokter Per Hari        = Rp."<<dokter <<endl;
    cout <<"|============================================================ x \n";
    cout <<"| Biaya Kamar Sebelum Potongan 10%       = Rp."<<biayaKamar <<endl;
    cout <<"| Potongan                               = Rp."<<pot <<endl;
    cout <<"|============================================================ - \n";
    cout <<"| Total Biaya Kamar                      = Rp."<<ttlBiayaKamar <<endl;
    cout <<"| Total Biaya Kunjungan Dokter           = Rp."<<biayaDokter <<endl;
    cout <<"|============================================================ + \n";
    cout <<"|\n";
    cout <<"| Total Biaya Rawat Inap Pasien          = Rp."<<ttl <<endl;
    cout <<"|                                         -------------------     \n";
    cout <<"|____________________________________________________________";
    return 0;

}
