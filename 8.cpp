#include "iostream"
using namespace std;

int main() {
  int sv1, s1, p1, sv2, s2, p2, at, at1, at2, at3, at4, at5, at6, min, sta, sta1, sta2;


  cout << "------" << '\n';
  cout << "Jusu turimi..." << '\n';
  cout << "Svarai: ";
  cin >> sv1;
  cout << "Silingai: ";
  cin >> s1;
  cout << "Pensai: ";
  cin >> p1;
  cout << "------" << '\n';
  cout << "Jums liko..." << '\n';
  cout << "Svarai: ";
  cin >> sv2;
  cout << "Silingai: ";
  cin >> s2;
  cout << "Pensai:";
  cin >> p2;

  // Smulkinimasis i pensus
  at = sv1 * 12 * 20;
  at1 = s1 * 20;
  at3 = at + at1 + p1;
  // Smulkinimasis i pensus
  at4 = sv2 * 12 * 20;
  at5 = s2 * 20;
  at6 = at4 + at5 + p2;

  // Stambinimas kartu su atimtimi

  sta = (at - at4) / 20 / 12;
  sta1 = (at1 - at5) / 20;
  sta2 = p1 - p2;


  cout << "------" << '\n';
  cout << "Kaina: " << '\n';
  cout << "Svarai: " << sta << '\n';
  cout << "Silingai: " << sta1 << '\n';
  cout << "Pensai: " << sta2 << '\n';
  cout << "------" << '\n';
  return 0;
}
