#include<iostream>

using namespace std;

int main() {
  
  int kenGaji;
  string grade;
  double terlambat, sakit, izin, alpha, tbobot, sbobot, ibobot, abobot, ikp;
  cout <<"Masukkan Jumlah Keterlambatan (Menit) ";
  cin >>terlambat;
  cout <<"Masukkan Jumlah Hari Sakit ";
  cin >>sakit;
  cout <<"Masukkan Jumlah Hari Izin ";
  cin >>izin;
  cout <<"Masukkan Jumlah Hari Alpha ";
  cin >>alpha;
  
  if (terlambat == 0) {
    tbobot = 4;
  }else if (terlambat >=1 && terlambat <= 60) {
    tbobot = 3;
  }else if (terlambat >=61 && terlambat <=90) {
    tbobot = 2;
  }else if (terlambat >=91 && terlambat <=120) {
    tbobot = 1;
  }else if (terlambat >120) {
    tbobot = 0;
  }else {
    cout <<"Maaf Inputan Anda Salah";
  }
  
  if (sakit == 0) {
    sbobot = 4;
  }else if (sakit >=1 && sakit <=3) {
    sbobot = 3;
  }else if (sakit >=4 && sakit <=7) {
    sbobot = 2;
  }else if (sakit >=8 && sakit <=14) {
    sbobot = 1;
  }else if (sakit >14) {
    sbobot = 0;
  }else {
    cout <<"Maaf Inputan Anda Salah";
  }
  
  if (izin == 0) {
    ibobot = 4;
  }else if (izin >=1 && izin <=3) {
    ibobot = 3;
  }else if (izin >=4 && izin <=5) {
    ibobot = 2;
  }else if (izin >=6 && izin <=7) {
    ibobot = 1;
  }else if (izin >7) {
    ibobot = 0;
  }else {
    cout <<"Maaf Inputan Anda Salah";
  }
  
  if (alpha == 0) {
    abobot = 4;
  }else if (alpha ==1) {
    abobot = 3;
  }else if (alpha ==2) {
    abobot = 2;
  }else if (alpha ==3) {
    abobot = 1;
  }else if (alpha >3) {
    abobot = 0;
  }else {
    cout <<"Maaf Inputan Anda Salah";
  }

  ikp = (tbobot + sbobot + ibobot + abobot) / 4;
  
  if (ikp >=3.75 && ikp <=4.00) {
    grade = "Star";
    kenGaji = 1500000;
  }else if (ikp >=3.00 && ikp <=3.74) {
    grade = "Potential";
    kenGaji = 750000;
  }else if (ikp >=2.00 && ikp <=2.99) {
    grade = "Career Person";
    kenGaji = 200000;
  }else if (ikp >=1.00 && ikp <=1.99) {
    grade = "Problem Employee";
    kenGaji = 100000;
  }else if (ikp >=0.00 && ikp <=0.99) {
    grade = "Deadwood";
    kenGaji = 0;
  }

  cout <<"\nBobot Keterlambatan = "<<tbobot;   
  cout <<"\nBobot Sakit         = "<<sbobot;
  cout <<"\nBobot Izin          = "<<ibobot;
  cout <<"\nBobot Alpha         = "<<abobot;
  cout <<"\nIKP                 = "<<ikp;
  cout <<"\nGrade               = "<<grade;
  cout <<"\nJumlah Kenaikan Gaji Karyawan Rp."<<kenGaji;
 
    return 0;
}
