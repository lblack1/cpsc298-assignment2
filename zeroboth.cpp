#include <iostream>

using namespace std;

// By Lloyd Black
void zeroBoth(int& arg1, int& arg2) {

  arg1 = 0;
  arg2 = 0;

}

int main(int argc, char** argv) {

  int testA, testB;
  cout << "Enter 2 integers: ";
  cin >> testA;
  cin >> testB;

  zeroBoth(testA, testB);

  cout << "Integers after zeroing: " << testA << ", " << testB << endl;

}
