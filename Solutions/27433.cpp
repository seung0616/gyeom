#include <iostream>
using namespace std;

long long int factorial(int n)
{
  if(n == 1) return 1;
  if(n == 0) return 1;

  return n * factorial(n - 1);
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  cout << factorial(N);

  return 0;
}