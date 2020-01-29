#include <iostream>

using namespace std;

// By Lloyd Black
int main(int argc, char** argv) {

  int numberArray[10];
  string temp;
  int i;

  for (i = 0; i < 10; ++i) {

    cout << "Enter an integer (program will crap out if you don't) or q to stop: ";
    cin >> temp;
    if (tolower(temp[0]) == 'q') {
      break;
    } else {
      numberArray[i] = stoi(temp);
    }

  }

  for (int j = 0; j < i; ++j) {
    cout << numberArray[j] << endl;
  }

}
