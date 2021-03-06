#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;
std::vector<std::string> GetStrings(const std::string& s)
{
  int n = s.size();
  std::vector<std::string> values;
  for(int i=0; i<n; ++i)
  {        
    for(int j=i; j<n; ++j)
    {
      std::string a = s.substr(i,j-i+1);
      //std::cout << a << std::endl;
      values.emplace_back(a);
    }    
  }
  return values;
}

int AnagramPairs(const std::vector<std::string>& params)
{
  int sum = 0;
  int n = params.size();
  std::vector<std::string> values;
  for(int i=0; i<n; ++i)
  {
    std::string a = params[i];
    std::sort(a.begin(), a.end());
    values.emplace_back(a);    
  }
  for(int i=0; i<n; ++i)
  {
    for(int j=i+1; j<n; ++j)
    {
      if (values[i] == values[j])
      {
        ++sum;
      }
    }
  }
  return sum;
}

int main() 
{
  std::string s;
  getline(std::cin, s);
  int n = atoi(s.c_str());
  //std::cout << n << std::endl;
  std:vector<std::string> lines;
  for (int i=0; i<n; ++i)
  {
    getline(std::cin, s);
    lines.emplace_back(s);
    //std::cout << s << std::endl;
  }
  
  for (int i=0; i<n; ++i)
  {
    std::vector<std::string> values = GetStrings(lines[i]);
    int sum = AnagramPairs(values);
    std::cout << sum << std::endl;
  }
  return 0;
}
