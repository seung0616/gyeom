#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  int cnt = 0;

  while(N--)
  {
    int n;
    cin >> n;

    if(n <= 1) continue;
    if(n == 2)
    {
      cnt++;
      continue;
    }

    int flag = 0;

    for(int i = 2; i <= sqrt(n); i++)
    {
      if(n % i == 0) 
      {
        flag = 1;
        break;
      }
    }

    if(flag == 0) cnt++;
  }

  cout << cnt;

  return 0;
}