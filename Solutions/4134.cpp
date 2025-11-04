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

  int T;
  cin >> T;

  while(T--)
  {
    long long int n;
    cin >> n;

    while(true)
    {
      if(isPrime(n)) break;
      else n++;
    }

    cout << n << '\n';
  }

  return 0;
}