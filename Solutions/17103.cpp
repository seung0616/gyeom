/*에라토스테네스의 체
  2부터 시작해서 모든 배수들을 지워나가며 소수를 찾아내는 방법
  미리 모든 소수를 다 구해놓은 후에 골드바흐 파티션을 찾아낸다.*/
#include <iostream>
#include <bitset>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T;
  cin >> T;

  bitset<1000001> prime;
  prime.set();

  prime[0] = prime[1] = false;

  for(int i = 2; i * i <= 1000000; i++)
  {
    if(prime[i])
    {
      for(int j = i * i; j <= 1000000; j += i)
      {
        prime[j] = false;
      }
    }
  }

  while(T--)
  {
    int N;
    cin >> N;

    int cnt = 0;

    for(int i = 2; i <= N / 2; i++)
    {
      if(prime[i] && prime[N - i]) cnt++;
    }

    cout << cnt << '\n';
  }

  return 0;
}