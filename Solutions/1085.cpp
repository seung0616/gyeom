#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int x, y, w, h;
  cin >> x >> y >> w >> h;

  int m = x;

  m = min(m, y);
  m = min(m, w - x);
  m = min(m, h - y);

  cout << m;

  return 0;
}