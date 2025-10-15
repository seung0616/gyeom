#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s;
  cin >> s;

  int i;
  cin >> i;

  cout << s[i - 1];

  return 0;
}