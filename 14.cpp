#include <iostream>

int main() {

  long n;
  int maximumterms = 0;
  long answer = 0;

  for (int i = 2; i <= 1000000; i++) {
    n = i;
    int terms = 1; //always atleast 1 term
    
    while (n != 1) { //stops when number is 1
      if (n % 2 == 0) {
        n = n / 2;
      }
      else {
        n = n * 3 + 1;
      }
      terms++;
    } 
    
    if (terms > maximumterms) {
      maximumterms = terms;
      answer = i;
      //std::cout << answer << "\n";
    }
  }
  std::cout << answer;
}
