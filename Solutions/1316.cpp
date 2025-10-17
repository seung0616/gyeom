#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool checking(string s)
{
  unordered_set<char> exist;

  for(int i = 0; i < s.length(); i++)
  {
    if(exist.find(s[i]) == exist.end())
    {
      exist.insert(s[i]);
    }
    else
    {
      if(s[i] == s[i - 1])
      {
        continue;
      }
      else
      {
        return false;
      }
    }
  }

  return true;
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  int cnt = 0;

  while(N--)
  {
    string s;
    cin >> s;
    
    if(checking(s)) cnt++;
  }

  cout << cnt;
  
  return 0;
}