#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  std::string s;
  std::getline(std::cin, s);
  int count = 1;
  for(auto& c : s)    
  {        
    if (c >='A' && c <='Z')
    {
      ++count;
    }
    //std::cout << c << std::endl;
  }
  std::cout << count << std::endl;
  return 0;
}
