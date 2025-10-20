#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int a, b, c;
  cin >> a >> b >> c;

  if(a + b + c != 180)
  { 
    cout << "Error";
  }
  else
  {
    if(a == 60 && b == 60 && c == 60) cout << "Equilateral";
    else if(a != b && b != c && a != c) cout << "Scalene";
    else cout << "Isosceles";
  }
  

  return 0;
}