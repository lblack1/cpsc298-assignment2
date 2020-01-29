#ifndef CONVERSION
#define CONVERSION

#include <iostream>
#include <utility>

using namespace std;

// By Lloyd Black
class Conversion {

  public:
    static pair<float, float> getInput();
    static pair<float, float> convert(pair<float, float> ftIn);
    static void output(pair<float, float> mCm);

};

#endif

pair<float, float> Conversion::getInput() {

  float ft, in;
  cout << "Enter length in feet inches (E.G. '6 3' for 6 feet, 3 inches, or '5 9.5' for 5 feet, 9.5 inches): ";
  cin >> ft >> in;
  return pair<float, float>(ft, in);

}

pair<float, float> Conversion::convert(pair<float, float> ftIn) {

  float inRaw = get<1>(ftIn) + (get<0>(ftIn) * 12);
  float cmRaw = inRaw * 2.54;
  float m = 0.0;
  while (cmRaw >= 100.0) {
    cmRaw -= 100.0;
    m += 1.0;
  }
  return pair<float, float>(m, cmRaw);

}

void Conversion::output(pair<float, float> mCm) {

  cout << "Converted value: " << get<0>(mCm) << " meters, " << get<1>(mCm) << " centimeters." << endl;

}

int main(int argc, char** argv) {
  string temp = "go";
  while (tolower(temp[0]) != 'q') {
    Conversion::output(Conversion::convert(Conversion::getInput()));
    cout << "Type 'q' to quit, or 'c' to continue: ";
    cin >> temp;
  }
}
