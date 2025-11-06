#include <iostream>
#include <stack>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int K;
  cin >> K;

  stack<int> money;

  while(K--)
  {
    int n;
    cin >> n;

    if(n == 0)
    {
      money.pop();
    }
    else
    {
      money.push(n);
    }
  }

  long long int sum = 0;

  while(!money.empty())
  {
    sum += money.top();
    money.pop();
  }

  cout << sum;

  return 0;
}