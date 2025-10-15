#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  for(int i = 0; i < 26; i++)
  {
    int idx = s.find('a' + i);

    if(idx == string::npos)
    {
      cout << -1 << ' ';
    }
    else
    {
      cout << idx << ' ';
    }
  }

  return 0;
}