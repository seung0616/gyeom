#include <iostream>
using namespace std;

long long int fibonacci(int n)
{
  if(n == 0) return 0;
  if(n == 1) return 1;

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  cout << fibonacci(N);

  return 0;
}