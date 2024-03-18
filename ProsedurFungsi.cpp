#include <iostream>
using namespace std;

string nama;
int nXpander, nPorsche, nAvanza, nBrio, nLamborghini;
int hXpander = 300, hPorsche = 8000, hAvanza = 250, hBrio = 200, hLamborghini = 6000;

void input(){
  cout << "nama Pembeli : ";
  cin >> nama;
  cout << "Jumhlah Xpander : ";
  cin >> nXpander;

  cout << "Jumlah Porsche";
  cin >> nPorsche;

  cout << "Jumlah Avanza : ";
  cin >> nAvanza;

  cout << "Jumlah Brio : ";
  cin >> nBrio;

  cout << "Jumlah Lamborgini : ";
  cin >> nLamborghini;


}

int TotalHarga(){
    return (nXpander * hXpander) + (nPorsche * nPorsche) + (nAvanza * nAvanza) + (nBrio * nBrio) + (nLamborghini * nLamborghini);
}

void Display(){
    cout << "Total Harganya : " << TotalHarga() << endl;
}

int main(){
    char pilihan;
    do{
       input();
       Display();
       cout << "Apakah ingin membeli kembali ? ";
       cin >> pilihan;
    }while(pilihan == 'y' ||pilihan == 'Y');
    
}