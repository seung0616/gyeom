#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int denominator1, denominator2, numerator1, numerator2;
  cin >> numerator1 >> denominator1 >> numerator2 >> denominator2;

  int result1 = denominator2 * numerator1 + denominator1 * numerator2;
  int result2 = denominator1 * denominator2;

  int n = __gcd(result1, result2);

  cout << result1 / n << ' ' << result2 / n;

  return 0;
}