#include "iostream"
using namespace std;

long a;
long men;
long d;
long v;

int main() {

  std::cout << "Koks amzius?: ";
  std::cin >> a;
  men = a * 12;
  d = a * 365;
  v = d * 24;

  std::cout << "Jus gyvenate siame pasaulyje: " << '\n';
  std::cout << men << " Menesiu." << '\n';
  std::cout << d << " Dienu." << '\n';
  std::cout << v << " Valandu." << '\n';


  return 0;
}
