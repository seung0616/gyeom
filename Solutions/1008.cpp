/*그냥 A / B만 출력하면 소수점이 6자리까지만 나옴
  그래서 cout.precision과 fixed를 이용해서 소수점 길이를
  조절함.
  cout.precision은 실수를 몇번째 자리까지 출력할건지
  정하는 함수이다. (cout.precision으로 정한 자리수보다
  더 큰 자리수의 수를 출력하면 지수표기법으로 출력이 된다.)
  fixed는 출력 스트림이 고정 소수점 모드로 설정하게 하는
  기능.
  지수표기법으로 출력되는걸 막고, precision으로 설정한
  자리수가 소수부분의 자리수가 된다. */
#include <iostream>
using namespace std;

int main() 
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    double A, B;
    cin >> A >> B;;

    cout.precision(10);
    cout << fixed;
    cout << A / B;

    return 0;
}