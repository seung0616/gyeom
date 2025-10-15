#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int time[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};

  string a;
  cin >> a;

  int result = 0;

  for (int i = 0; i < a.length(); i++)
  {
    result += time[a[i] - 'A']; 
  }

  cout << result;
  
  return 0;
}