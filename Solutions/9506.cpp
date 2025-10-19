#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  
  while(true)
  {
    cin >> n;

    if(n == -1) break;

    int sum = 0;
    vector<int> divisors;

    for(int i = 1; i < n; i++)
    {
      if(n % i == 0)
      {
        sum += i;
        divisors.push_back(i);
      }
    }

    if(sum == n)
    {
      cout << n << " = ";
      for(int divisor : divisors)
      {
        if(divisor == divisors.back())
        {
          cout << divisor << '\n';
        }
        cout << divisor << " + ";
      }
    }
    else
    {
      cout << n << " is NOT perfect.\n";
    }
  }

  return 0;
}