/*Horner's rule을 이용한다.(반복문으로 구현하기 쉬움)
  for문의 전 사이클의 result값에 매번 곱해지는 수(B)를 곱해주고 계수(N[i])를 더해준다*/
#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string N;
  int B;
  cin >> N >> B;

  long long int result = 0;

  for(int i = 0; i < N.length(); i++)
  {
    int num;

    if(isalpha(N[i]))
    {
      num = N[i] - 55;
    }
    else
    {
      num = N[i] - '0';
    }

    result = result * B + num;
  }

  cout << result;

  return 0;
}