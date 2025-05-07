#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double R, L, C, w = 0.2;
  double Z;

  cout << "Задайте R: ";
  cin >> R;
  cout << "Задайте L: ";
  cin >> L;
  cout << "Задайте C: ";
  cin >> C;


 Z = sqrt(R * R - pow(w * L - (1 / (w * C)), 2));




  cout << "Полное сопротивление цепи: " << Z << endl;

  return 0;
}






























































































































  