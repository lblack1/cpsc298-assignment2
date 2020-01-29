#include <iostream>

using namespace std;

// By Lloyd Black
int main(int argc, char** argv) {

  int arr[4][5];

  cout << "Enter 20 integers below" << endl;
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 5; ++j){
      cin >> arr[i][j];
    }
  }

  cout << "You entered..." << endl;

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout << arr[i][j] << ' ';
    }
    cout << endl;
  }

}
