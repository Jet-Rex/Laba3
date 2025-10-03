/*************************
* Автор: Базанов В.В. *
* Название: Вариант №1 *
*************************/


#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double Nu, Re, diameter, stepCross1, stepCross2, sDiagonal, delta, step;
  Re = 2.0 * pow(10, 4);
  step = 20.0;
  stepCross2 = 30.0;
  
  cout << "Diameter = ";
  cin >> diameter;
  cout << "Cross pitch of rows of pipes = ";
  cin >> stepCross1;
  
  for (int i = 0; i < 5; i++) {
  sDiagonal =  diameter * sqrt(0.25 * pow(stepCross1 / diameter, 2) + pow(stepCross2 / diameter, 2));
  delta = (stepCross1 - diameter) / ( sDiagonal - diameter);
  if (delta < 0.7) {
    Nu = 0.27 * pow(Re, 0.6) * delta;
  } else {
      Nu = 0.295 * pow(Re, 0.6) * pow(delta, 0.25);
  }
  stepCross2 += step;
  step -= 5.0;
  cout << "Nu = " << Nu << endl
       << "delta = " << delta << endl;
}
}