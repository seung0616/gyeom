#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T;
  cin >> T;

  while(T--)
  {
    string s;
    cin >> s;

    stack<char> vps;

    int flag = 0;

    for(char c : s)
    {
      if(c == '(')
      {
        vps.push(c);
      }
      else if(c == ')')
      {
        if(vps.empty())
        {
          flag = 1;
          break;
        }
        else
        {
          vps.pop();
        }
      }
    }

    if(!vps.empty()) flag = 1;

    if(flag == 1)
    {
      cout << "NO\n";
    }
    else
    {
      cout << "YES\n";
    }
  }

  return 0;
}