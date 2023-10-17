#include <iostream>
using namespace std;
int main() {
 string nama, ket;
 string jawab;
 cout <<"Hai! Siapa namamu?\n";
 cin >>nama;
 cout <<"Hallo "<<nama <<", Aku VebBot, aku akan memberikanmu 3 pertanyaan, kamu boleh jawab 'iya' atau 'tidak' untuk pertanyaanku ini, siap?\n";
 cin >>ket;
 cout <<"Apakah "<<nama <<" suka makan pedas? \n";
 cin >>jawab;
 if(jawab == "iya"){
  cout <<"Wawww perutmu kuat sekali yaa\n";
 }else {
  cout <<"Kayaknya kita punya masalah yang sama, aku juga nggak suka makan pedas\n";
 };

 cout <<"Apakah "<<nama <<" suka menonton film horor?\n";
 cin >>jawab;
if(jawab == "iya"){
cout <<"Nice, btw aku suka film horror The nun\n";
}else {
  cout <<"yaaah kok gasuka, gaasik nih\n";
 };

 cout <<"Apakah "<<nama <<" suka membaca buku? ";
 cin >>jawab;
 if(jawab == "iya"){
  cout <<"Kayaknya kamu orangnya asik deh, kapan kapan kita baca buku bareng ya\n";
 }else {
  cout <<"ooh gitu, baca buku itu seru looh\n";
 };
 cout <<"Sekian dulu ya "<<nama << " makasi udah jawab";

 return 0;
}
