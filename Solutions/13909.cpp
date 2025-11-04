/*창문은 약수의 개수가 짝수 일 때 닫혀있게되고 홀수일 때는 열려있게 된다.
  근데 약수의 개수가 홀수인 경우는 그 수가 제곱수인 경우 뿐이다.
  약수는 항상 짝을 지어서 존재하지만 제곱수의 경우에는 같은 약수가 짝을 짓기 때문에 약수의 개수가 홀수가 된다.
  그렇기 때문에 제곱수의 개수만 세면 된다.*/
#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long int N;
  cin >> N;

  long long int k = 1;
  long long int cnt = 0;

  while(k * k <= N)
  {
    k++;
    cnt++;
  }

  cout << cnt;

  return 0;
}