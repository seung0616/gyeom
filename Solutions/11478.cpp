#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string S;
  cin >> S;

  unordered_set<string> strs;

  for(int i = 0; i < S.length(); i++)
  {
    for(int j = 0; j < S.length() - i; j++)
    {
      string s = s.substr(j, i + 1);
      strs.insert(s);
    }
  }

  cout << strs.size();

  return 0;
}