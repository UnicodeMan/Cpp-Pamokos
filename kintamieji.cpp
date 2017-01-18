#include <iostream>
using namespace std;
int main() {

  int a, b, c, suma, daugyba, vidurkis;

  cout << "Iveskite pirmaji skaiciu: " << '\n';
  cin >> a;
  cout << "Iveskite antraji skaiciu: " << '\n';
  cin >> b;
  cout << "Iveskite treciaji skaiciu: " << '\n';
  cin >> c;

  cout << '\n';

  suma = a + b + c;
  daugyba = a * b * c;
  vidurkis = (a + b + c) / 3;

  cout << '\n';

  cout << "Suma: " << suma << '\n';
  cout << "Daugyba: " << daugyba << '\n';
  cout << "Vidurkis: " << vidurkis << '\n';
  return 0;
}
