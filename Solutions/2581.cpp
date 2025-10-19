#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int M, N;
  cin >> M >> N;

  int sum = 0;
  int m = 10001;

  for(int i = M; i <= N; i++)
  {
    int flag = 0;

    if(i == 1) continue;
    if(i == 2) 
    {
      sum += 2;
      m = 2;
      continue;
    }

    for(int j = 2; j <= sqrt(i); j++)
    {
      if(i % j == 0) 
      {
        flag = 1;
        break;
      }
    }

    if(flag == 0)
    {
      sum += i;

      if(m == 10001) m = i;
    }
  }

  if(sum != 0)
  {
    cout << sum << '\n' << m;
  }
  else
  {
    cout << -1;
  }

  return 0;
}