#include <iostream>

using namespace std;

int cariFaktorial(int input) {
  if(input > 1)
    return input * cariFaktorial(input - 1);
  else
    return 1;
}

int main()
{  int angka;

  cout << "Masukkan angka: ";
  cin >> angka;

  cout << angka << "! = " << cariFaktorial(angka);
  cout << endl;

  return 0;
}
