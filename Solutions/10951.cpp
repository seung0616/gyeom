/*EOF(End Of File)을 이용하는 문제
  EOF는 파일의 끝 더이상 읽을 데이터가 없는 것을 나타낸다
  cin.eof()를 통해 파일의 끝을 확인 할 수 있다.
  또는 cin의 입력이 실패하면 반복문이 종료되도록 할 수 있다*/
#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int A, B;

  while(cin >> A >> B)
  {
    cout << A + B << '\n'; 
  }

  return 0;
}