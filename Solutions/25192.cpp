/*데이터의 형태가 짧은 문자열이면 unordered_set보다 set이 빠름
  그리고 문자열이 서로 유사할 때에도 set이 더 빠름 (해시가 충돌 할 가능성이 높음)
  데이터가 숫자이거나 개수가 적은 긴 문자열이면 unorderd_set이 더 빠름*/
#include <iostream>
#include <set>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  set<string> log;
  int cnt = 0;

  while(N--)
  {
    string s;
    cin >> s;

    if(s == "ENTER")
    {
      cnt += log.size();
      log.clear();
    }
    else
    {
      log.insert(s);
    }
  }

  cnt += log.size();

  cout << cnt;

  return 0;
}