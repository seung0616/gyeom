#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  long long int X;
  cin >> X;

  int N;
  cin >> N;

  long long int sum = 0;

  while(N--)
  {
    int a, b;
    cin >> a >> b;

    sum += a * b;
  }

  if(X == sum) cout << "Yes";
  else cout << "No";

  return 0;
}