#include <iostream>

int main() {
  long int n1 = 0, n2 = 1, nth = 0; //1st term and 2nd term of fibonacci
  int sum = 0;
  //generating  fibonacci seq
  while (nth < 4000000) {
    nth = n1 + n2; 
    if (nth % 2 == 0) {
      sum += nth; //adds up the even  n terms
    }
    n1 = n2; //continue the fibonacci
    n2 = nth; 
    }
  std::cout << sum;
}
