#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  int num = 666;
  int cnt = 0;

  while(true)
  {
    string s = to_string(num);

    if(s.find("666") != string::npos)
    {
      cnt++;
    }

    if(cnt == N) break;

    num++;
  }

  cout << num;

  return 0;
}