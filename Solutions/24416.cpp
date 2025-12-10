#include <iostream>
#include <vector>
using namespace std;

long long int d[41] = {};
int cnt1 = 0;
int cnt2 = 0;

long long int fib(int n)
{
  if(n == 1 || n == 2) 
  {
    cnt1++;
    return 1;
  }

  return fib(n - 1) + fib(n - 2);
}

long long int fibonacci(int n)
{
  d[1] = d[2] = 1;

  for(int i = 3; i <= n; i++)
  {
    d[i] = d[i - 1] + d[i - 2];
    cnt2++;
  }

  return d[n];
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  fib(n);
  fibonacci(n);

  cout << cnt1 << ' ' << cnt2;

  return 0;
}