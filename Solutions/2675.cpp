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
    int R;
    string s;

    cin >> R >> s;

    for(char c : s)
    {
      for(int i = 0; i < R; i++)
      {
        cout << c;
      }
    }

    cout << '\n';
  }

  return 0;
}