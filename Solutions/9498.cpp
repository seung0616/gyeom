#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  if(n <= 100 && n >= 90) cout << "A" << endl;
  else if(n < 90 && n >= 80) cout << "B" << endl;
  else if(n < 80 && n >= 70) cout << "C" << endl;
  else if(n < 70 && n >= 60) cout << "D" << endl;
  else cout << "F";

  return 0;
}