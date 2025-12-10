#include <iostream>
using namespace std;

int d[51][51][51] = {};

int w(int a, int b, int c)
{
  if(a <= 0 || b <= 0 || c <= 0) return 1;

  if(d[a][b][c] != 0) return d[a][b][c];
  else
  {
    if(a > 20 || b > 20 || c > 20)
    {
      d[a][b][c] = w(20, 20, 20);
      return d[a][b][c];
    }
    else if(a < b && b < c)
    {
      d[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
      return d[a][b][c];
    }
    else
    {
      d[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
      return d[a][b][c];
    }
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  while(true)
  {
    int a, b, c;
    cin >> a >> b >> c;

    if(a == -1 && b == -1 && c == -1) break;

    cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << '\n';
  }

  return 0;
}