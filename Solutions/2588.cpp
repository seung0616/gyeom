#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int num1, num2;
  cin >> num1 >> num2;;

  int a, b, c, d;
  a = num1 * (num2 % 10);
  b = num1 * ((num2 / 10) % 10);
  c = num1 * (num2 / 100);
  d = num1 * num2;

  cout << a << '\n' << b << '\n' << c << '\n' << d;
  
  return 0;
}