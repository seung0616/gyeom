#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  set<string, greater<string>> employees;

  for(int i = 0; i < n; i++)
  {
    string name, s;
    cin >> name >> s;

    if(s == "enter") employees.insert(name);
    else if(s == "leave") employees.erase(name);
  }

  for(string employee : employees)
  {
    cout << employee << '\n';
  }

  return 0;
}