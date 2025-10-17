#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;
    
  int idx = 0;
  int cnt = 0;
    
  int len = s.length();
    
  while(idx < len)
  {
    if(s[idx] == 'c')
    {
      if(idx + 1 < len && (s[idx + 1] == '=' || s[idx + 1] == '-'))
      {
        cnt++;
        idx += 2;
      }
      else
      {
        cnt++;
        idx++;
      }
    }
    else if(s[idx] == 'd')
    {
      if(idx + 2 < len && s[idx + 1] == 'z' && s[idx + 2] == '=')
      {
        cnt++;
        idx += 3;
      }
      else if(idx + 1 < len && s[idx + 1] == '-')
      {
        cnt++;
        idx += 2;
      }
      else
      {
        cnt++;
        idx++;
      }
    }
    else if(s[idx] == 'l' || s[idx] == 'n')
    {
      if(idx + 1 < len && s[idx + 1] == 'j')
      {
        cnt++;
        idx += 2;
      }
      else
      {
        cnt++;
        idx++;
      }
    }
    else if(s[idx] == 's' || s[idx] == 'z')
    {
      if(idx + 1 < len && s[idx + 1] == '=')
      {
        cnt++;
        idx += 2;
      }
      else
      {
        cnt++;
        idx++;
      }
    }
    else
    {
      cnt++;
      idx++;
    }
  }
    
  cout << cnt;

  return 0;
}