#include <iostream>
using namespace std;

int main() {
  int a, *pa;
  pa = &a;
  cout << "pa = &a --> pa = " << pa << endl << endl;

  pa = pa * 3; // trying to multiply pointer, this line will cause an error

  cout << "pa = pa * 3 --> pa = " << pa << endl << endl;

  return 0;
}
