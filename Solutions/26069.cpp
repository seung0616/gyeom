#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  set<string> dancers;
  dancers.insert("ChongChong");

  int N;
  cin >> N;

  while(N--)
  {
    string s1, s2;
    cin >> s1 >> s2;

    if(dancers.find(s1) != dancers.end())
    {
      dancers.insert(s2);
    }
    else if(dancers.find(s2) != dancers.end())
    {
      dancers.insert(s1);
    }
  }

  cout << dancers.size();

  return 0;
}