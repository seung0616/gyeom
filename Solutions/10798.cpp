#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  vector<string> v;

  size_t l = 0;

  for(int i = 0; i < 5; i++)
  {
    string s;
    cin >> s;

    l = max(l, s.length());
    v.push_back(s);
  }

  for(int i = 0; i < l; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      if(v[j].length() > i)
      {
        cout << v[j][i];
      }
    }
  }

  return 0;
}