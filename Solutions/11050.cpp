#include <iostream>
using namespace std;

long long int factorial(int n)
{
  int result = 1;

  for(int i = 1; i <= n; i++)
  {
    result *= i;
  }
  return result;
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, K;
  cin >> N >> K;

  cout << factorial(N) / (factorial(K) * factorial(N - K));

  return 0;
}