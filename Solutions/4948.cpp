#include <iostream>
using namespace std;

bool isPrime(long long int n)
{
  if(n < 2) return false;
  if(n == 2) return true;
  if(n % 2 == 0) return false;

  for(int i = 3; i * i <= n; i += 2)
  {
    if(n % i == 0) return false;
  }

  return true;
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  while(true)
  {
    int n;
    cin >> n;

    if(n == 0) break;

    int cnt = 0;

    for(int i = n + 1; i <= 2 * n; i++)
    {
      if(isPrime(i)) cnt++;
    }

    cout << cnt << '\n';
  }

  return 0;
}