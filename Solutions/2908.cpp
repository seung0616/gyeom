#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  string s1, s2;
  cin >> s1 >> s2;

  reverse(s1.begin(), s1.end());
  reverse(s2.begin(), s2.end());

  int num1 = stoi(s1);
  int num2 = stoi(s2);

  if(num1 > num2) cout << num1;
  else cout << num2;

  return 0;
}