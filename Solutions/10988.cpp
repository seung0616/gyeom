#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  int a = 0; 
  int b = s.length() - 1;

  int flag = 0;

  while(a < b)
  {
    if(s[a] != s[b])
    {
      flag = 1;
      break;
    }

    a++;
    b--;
  }

  if(flag == 1) cout << 0;
  else cout << 1;

  return 0;
}