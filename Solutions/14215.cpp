#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
    
  vector<int> len(3);
  cin >> len[0] >> len[1] >> len[2];

  sort(len.begin(), len.end());

  if(len[2] >= len[0] + len[1])
  {
    cout << (len[0] + len[1]) * 2 - 1;
  }
  else
  {
    cout << len[0] + len[1] + len[2];
  }

  return 0;
}