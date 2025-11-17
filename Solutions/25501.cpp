#include <iostream>
#include <string.h>
using namespace std;

int cnt = 0;

int recursion(const char *s, int l, int r)
{
  cnt++;
  if(l >= r) return 1;
  else if(s[l] != s[r]) return 0;
  else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s)
{
  return recursion(s, 0, strlen(s)-1);
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T;
  cin >> T;

  while(T--)
  {
    char s[1001];
    cin >> s;

    cnt = 0;

    int r = isPalindrome(s);
    cout << r << ' ' << cnt << '\n';
  }

  return 0;
}