#include <iostream>

int main() {
  int sumsquare = 0;
  int sum = 0;
  int squaresum = 0;
  for (int i = 1; i <101; i++) {
    sumsquare += i * i;
    sum += i;
    squaresum = sum * sum;
  }
  int difference = squaresum - sumsquare;  
  std::cout << difference;
}
