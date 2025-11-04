/*최대공약수(GCD) X 최소공배수(LCM) = 곱*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long int A, B;
  cin >> A >> B;

  cout << (A * B) / __gcd(A, B);

  return 0;
}