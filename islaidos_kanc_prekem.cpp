#include "iostream"
using namespace std;

int a; // Su langeliais
int b; // Su linijomis

double k; // Vieno sasiuvinio kaina

double s; // Suma

int main() {
std::cout << "Sasiuviniu kiekis su Langeliais : ";
std::cin >> a;
std::cout << "Sasiuviniu kiekis su Linijomis : ";
std::cin >> b;
std::cout << "Sasiuviniu kaina : ";
std::cin >> k;

s = (a + b) * k;

std::cout << "Andrius nusipirko sasiuviniu uz : " << s << " Lt";




  return 0;
}
