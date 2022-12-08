#include <iostream>
#include <string>

int main() {
  int sum = 0;

  //set range from 400 to get 6 digits n only
  for (int i = 400; i < 1000; i++){
    for (int j = 400; j < 1000; j++) {
      int n = i * j;
      std::string nstring = std::to_string(n);
      if (nstring[0] == nstring[nstring.size() - 1] && nstring[1] == nstring[nstring.size() - 2] && nstring[2] == nstring[nstring.size() - 3]) {
        int value = stoi(nstring);
        if (value > sum)
          sum = value;
      }      
    }
  }
  std::cout << sum;
}