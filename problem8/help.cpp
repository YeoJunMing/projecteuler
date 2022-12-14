//file is alr in 1 single line only
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::ifstream file("1.txt");
  std::string line;
  std::vector<std::string> svector;
  
  while (getline(file, line)) {
    for (int i = 0; i < line.size()-12; i++) {
      std::string digits = line.substr(i,13);
      svector.push_back(digits);
      //std::cout << svector.at(i) << " ";
    }
    //remove strings with 0
    for (int i = 0; i < svector.size(); i++) {
      if (svector[i].find('0') != std::string::npos) {
        svector.erase(svector.begin() + i);
        i--;
      }
    }
    long long sum = 0;
    for (int i = 0; i < svector.size(); i++) {    
      long long num = std::stoi(svector.at(i).substr(0,1)) * std::stoi(svector.at(i).substr(1,1)) * std::stoi(svector.at(i).substr(2,1)) * std::stoi(svector.at(i).substr(3,1)) * std::stoi(svector.at(i).substr(4,1)) * std::stoi(svector.at(i).substr(5,1)) * std::stoi(svector.at(i).substr(6,1)) * std::stoi(svector.at(i).substr(7,1)) * std::stoi(svector.at(i).substr(8,1)) * std::stoi(svector.at(i).substr(9,1)) * std::stoi(svector.at(i).substr(10,1)) * std::stoi(svector.at(i).substr(11,1)) * std::stoi(svector.at(i).substr(12,1));
      if (num > sum) {sum = num;}
      //std::cout << svector.at(i) << " " << svector.at(i).substr(0,1) << "\n";
      //std::cout << num << "\n";
    }
    std::cout << sum;            
  }
}
