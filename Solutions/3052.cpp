#include <iostream>
#include <unordered_set>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  unordered_set<int> s;

  for(int i = 0; i < 10; i++)
  {
    int n;
    cin >> n;

    s.insert(n % 42);
  }

  cout << s.size();

  return 0;
}