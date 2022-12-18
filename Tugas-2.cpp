#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 2) {
        int a = 0;
  cout << "Program hitung luas bangun datar\n1. Persegi\n2. Persegi Panjang\n3. Segitiga\n4. Trapesium\n5. Jajar Genjang\n6. Belah Ketupat\n7. Layang- Layang\n8. Lingkaran\nSilahkan pilih salah satu : ";
  cin >> a;
  //percabangan menggunakan switch untuk memilih salah 1 dari program yang ada
  switch (a)
  {
      case 1:
      //Menghitung luas persegi
      float s1,L1;
      cout << "Masukkan panjang sisi persegi :\n";
      cin >> s1;
      L1 = s1*s1;
      cout << "Hasil hitung luas persegi adalah : "<<L1;
      break;
      
      case 2:
      //Menghitung luas persegi panjang
      float p2, l2, L2;
      cout << "Masukan nilai panjang dan lebar dari persegi panjang : \n";
      cin >> p2 >> l2;
      L2 = p2*l2;
      cout << "Hasil hitung luas persegi panjang adalah : "<<L2;
      break;
      
      case 3:
      //Menghitung luas segitiga
      float a3 , t3, L3;
      cout << "Masukan nilai alas dan tinggi segitiga : \n";
      cin >> a3 >> t3;
      L3 = 0.5*a3*t3;
      cout << "Hasil hitung luas segitiga adalah : "<<L3;
      break;
      
      case 4:
      //Menghitung luas trapesium
      float a4, b4, t4, L4;
      cout << "Masukan nilai sisi a,b dan tinggi trapesium : \n";
      cin >> a4 >> b4 >> t4;
      L4 = 0.5*(a4+b4)*t4;
      cout << "Hasil hitung luas trapesium adalah : "<<L4;
      break;
      
      case 5:
      //Menghitung luas jajar genjang
      float a5, t5, L5;
      cout << "Masukan nilai alas dan tinggi dari jajar genjang : \n";
      cin >> a5 >> t5;
      L5 = a5*t5;
      cout << "Hasil hitung luas jajar genjang adalah : "<<L5;
      break;
      
      case 6:
      //Menghitung luas belah ketupat
      float d1, d2, L6;
      cout << "Masukan nilai diameter 1 dan diameter 2 belah ketupat : \n";
      cin >> d1 >> d2;
      L6 = 0.5*d1*d2;
      cout << "Hasil hitung luas belah ketupat adalah : "<<L6;
      break;
      
      case 7:
      //Menghitung luas layang-layang
      float d3, d4, L7;
      cout << " Masukkan nilai diameter 1 dan diameter 2 layang-layang\n";
      cin >> d3 >> d4;
      L7 = 0.5*d3*d4;
      cout << "Hasil hitung luas layang-layang adalah :" << L7;
      break;
      
      case 8:
      //Menghitung Luas Lingkaran
      float Phi, r8, L8;
      Phi = 3.14;
      cout << "Masukkan nilai Jari-jari: ";
      cin >> r8;
      L8 = Phi*(r8*r8);
      cout << "Luas dari lingkaran adalah: " << L8 << endl;
      break;
      
      default:
      cout << "maaf input yang anda masukkan salah";
  }
        cout << endl << "jika anda ingin menghitung luas bangun datar lagi ketik 1" << "\n";
        cin >> i;
}
  return 0;
}
