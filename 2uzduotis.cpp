#include "iostream"
using namespace std;

long x; // Valandos
long y; // Minutes
long m; // [Rezultatas] Minutes
long s; // [Rezultatas] Sekundes

int main() {

  std::cout << "Kiek valandu rodo laikrodis?: ";
  std::cin >> x;
  std::cout << "Kiek minuciu rodo laikrodis?: ";
  std::cin >> y;

  m = x * 60 + y;
  s = m * 60;

  std::cout << "Nuo vidurnakcio praejo: " << m << " min " << s << " sec ";

  return 0;
}
