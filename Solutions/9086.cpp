#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int T;
  cin >> T;

  while(T--)
  {
    string s;
    cin >> s;

    cout << s.front() << s.back() << '\n';
  }

  return 0;
}