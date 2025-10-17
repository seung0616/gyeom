#include <iostream>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;
    
  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < N - i - 1; j++)
    {
      cout << ' ';
    }
    for(int j = N - i - 1; j < N; j++)
    {
      cout << '*';
    }
    for(int j = 0; j < i; j++)
    {
      cout << '*';
    }
    cout << '\n';
  }
    
  for(int i = 0; i < N - 1; i++)
  {
    cout << ' ';
        
    for(int j = 0; j < i; j++)
    {
      cout << ' ';
    }
    for(int j = 0; j < N - 1 - i; j++)
    {
      cout << '*';
    }
    for(int j = 0; j < N - 2 - i; j++)
    {
      cout << '*';
    }
    cout << '\n';
  }

  return 0;
}