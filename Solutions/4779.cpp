#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void del(string& s, int m, int n)
{
  if(n - m < 2) return;

  int len = n - m + 1;
  int a = len / 3;

  for(int i = m + a; i < m + 2 * a; i++)
  {
    s[i] = ' ';
  }

  del(s, m, m + a - 1);
  del(s, m + 2 * a, n);
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;

  while(cin >> n)
  {
    string s(pow(3, n), '-');
    del(s, 0, s.length() - 1);

    cout << s << '\n';
  }

  return 0;
}