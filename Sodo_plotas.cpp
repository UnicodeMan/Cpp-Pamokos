#include <iostream>
using namespace std;

int m; // Medziu sode
double sm; // Vid. Plotas 1 medziui
double s; // Sodo plotas

  int main() {

    std::cout << "Medziu sode: ";
    std::cin >> m;
    std::cout << "Vid. plotas 1 medziui: ";
    std::cin >> sm;
    s = m * sm;
    std::cout << "Sodo plotas: " << s << " kv. metru";

    return 0;
  }
