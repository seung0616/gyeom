#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long int X;
  cin >> X;

  long long int sum = 0;
  int n = 1;

  while(sum < X)
  {
    sum += n;
    n++;
  }

  if(n % 2 == 0)
  {
    int k = sum - X;

    int numerator = k + 1;
    int denominator = n - numerator;

    cout << numerator << '/' << denominator;
  }
  else
  {
    int k = sum - X;

    int denominator = k + 1;
    int numerator = n - denominator;

    cout << numerator << '/' << denominator;
  }

  return 0;
}