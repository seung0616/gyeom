/*stringstream을 이용하면 문자열을 쉽게 공백을 기준으로 구분 할 수 있다.
  stringstream에 문자열을 넣어서 객체를 생성하면 
  문자열을 복사해서 내부 버퍼에 저장한다.
  그리고 >> 연산자를 통해 공백을 기준으로 구분해서 문자열을 읽어낸다
  단어 하나 읽고 스트림 포인터를 다음 단어로 이동시킨다.*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  getline(cin, s);

  stringstream ss(s);
  string word;

  int cnt = 0;

  while(ss >> word)
  {
    cnt++;
  }

  cout << cnt;

  return 0;
}