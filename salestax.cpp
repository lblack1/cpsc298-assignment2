#ifndef SALESTAX
#define SALESTAX

#include <iostream>

using namespace std;

// By Lloyd Black
class SalesTax {

  public:
    static float addTax(float taxRate, float cost);

};
#endif

float SalesTax::addTax(float taxRate, float cost) {

  return cost + (.01 * taxRate * cost);

}

int main(int argc, char** argv) {

  cout << SalesTax::addTax(3.4, 10) << endl;

}
