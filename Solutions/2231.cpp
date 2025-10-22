#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
    
  int N;
  cin >> N;

  for(int i = 1; i < N; i++)
  {
    int tmp = i;
    int sum = tmp;

    while(tmp > 0)
    {
      sum += tmp % 10;
      tmp /= 10;
    }

    if(sum == N)
    {
      cout << i;
      return 0;
    }
  }

  cout << 0;

  return 0;
}