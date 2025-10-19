/*벌집이 한 겹 늘어날 때 마다 한 겹의 벌집 수가 6씩 늘어난다.*/
#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long int N;
  cin >> N;

  int k = 6;
  long long int sum = 1;
  int cnt = 1;

  while(sum < N)
  {
    sum += k;
    k += 6;
    cnt++;
  }

  cout << cnt;

  return 0;
}