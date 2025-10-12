#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B, C;
  cin >> A >> B >> C;

  int h = C / 60;    //시간 변화량
  int m = C % 60;    //분 변화량

  A += h;   //시간 변화량 만큼 시간 증가
  B += m;   //분 변화량 만큼 분 증가

  A += B / 60;    //분이 60을 넘으면 시간은 B를 60으로 나눈 값 만큼 증가
  B %= 60;    //분이 60을 넘으면 분을 60으로 나눈 나머지가 최종값
  A %= 24;    //시간이 24를 넘으면 시간을 24로 나눈 나머지가 최종값

  cout << A << ' ' << B;

  return 0;
}