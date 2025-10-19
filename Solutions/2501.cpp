#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, K;
  cin >> N >> K;

  int cnt = 0;
  int result = 0;

  for(int i = 1; i <= N; i++)
  {
    if(N % i == 0) cnt++;

    if(cnt == K)
    {
      result = i;
      break;
    }
  }

  cout << result;

  return 0;
}