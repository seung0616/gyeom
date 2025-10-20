#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  while(true)
  {
    int a, b, c;
    cin >> a >> b >> c;

    if(a == 0 && b == 0 && c == 0) break;

    int M = a;
    M = max(M, b);
    M = max(M, c);

    if(M * 2 >= a + b + c)
    {
      cout << "Invalid\n";
    }
    else
    {
      if(a == b && b == c) cout << "Equilateral\n";
      else if(a != b && b != c && c != a) cout << "Scalene\n";
      else cout << "Isosceles\n";
    }
  }

  return 0;
}