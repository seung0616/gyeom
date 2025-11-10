/*조합을 구할 때 공식을 이용해서 반복문으로 팩토리얼을 풀면 숫자가 너무 커져서 출력이 제대로 안되기 때문에
  하나의 반복문에서 같이 분자를 곱하고 분모를 나눠주는 형태로 풀어야 한다
  분자에는 M부터 M - N + 1까지 총 N개의 수를 곱해주기 때문에 분모에는 N!만 나눠주면 된다.*/
#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T;
  cin >> T;

  while(T--)
  {
    int N, M;
    cin >> N >> M;

    int result = 1;

    for(int i = 0; i < N; i++)
    {
      result *= (M - i);
      result /= (i + 1);
    }

    cout << result << '\n';
  }

  return 0;
}