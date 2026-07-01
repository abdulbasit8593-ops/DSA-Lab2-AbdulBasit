#include <iostream>
using namespace std;

// a) Swap using pointers (addresses use karke)
void swapUsingPointers(int *pa, int *pb) {
  int temp = *pa;
  *pa = *pb;
  *pb = temp;
}

// b) Swap using pointer to pointer
void swapUsingDoublePointers(int **ppa, int **ppb) {
  int temp = **ppa;
  **ppa = **ppb;
  **ppb = temp;
}

int main() {
  int a = 5, b = 10;
  int *pa = &a;
  int *pb = &b;
  int **ppa = &pa;
  int **ppb = &pb;

  cout << "Before swap: a = " << a << ", b = " << b << endl;

  swapUsingPointers(pa, pb);
  cout << "After swapUsingPointers: a = " << a << ", b = " << b << endl;

  swapUsingDoublePointers(ppa, ppb);
  cout << "After swapUsingDoublePointers: a = " << a << ", b = " << b << endl;

  return 0;
}
