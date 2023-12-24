#include<bits/stdc++.h>
using namespace std;

void swap1(int a, int b) { // Call by value
  int temp = a;
  a = b;
  b = temp;
}

void swap2(int* a, int* b) { // Call by reference using pointers
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swap3(int& a, int& b) { // Call by reference using references
  int temp = a;
  a = b;
  b = temp;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a = 10, b = 20;
  swap1(a, b);
  cout << a << ' ' << b << '\n'; // Output: 10 20 (no change in the values of 'a' and 'b')

  swap2(&a, &b);
  cout << a << ' ' << b << '\n'; // Output: 20 10 (values of 'a' and 'b' are swapped)

  swap3(a, b);
  cout << a << ' ' << b << '\n'; // Output: 10 20 (values of 'a' and 'b' are swapped)

  return 0;
}