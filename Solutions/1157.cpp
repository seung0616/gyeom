#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  unordered_map<char, int> um;

  for(int i = 0; i < s.length(); i++)
  {
    um[toupper(s[i])]++;
  }

  int M = 0;
  char c;
  int flag = 0;

  for(auto elem : um)
  {
    if(elem.second > M)
    {
      M = elem.second;
      c = elem.first;
      flag = 0;
    }
    else if(elem.second == M)
    {
      flag = 1;
    }
  }

  if(flag == 1) cout << '?';
  else cout << c;

  return 0;
}