#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  string s;
  cin >> s;

  int sum = 0;

  for(char c : s)
  {
    sum += c - '0';
  }

  cout << sum;

  return 0;
}