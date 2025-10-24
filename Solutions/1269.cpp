#include <iostream>
#include <unordered_set>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  unordered_set<int> A;

  for(int i = 0; i < N; i++)
  {
    int n;
    cin >> n;

    A.insert(n);
  }

  int cnt = 0;

  for(int i = 0; i < M; i++)
  {
    int n;
    cin >> n;

    if(A.count(n))
    {
      A.erase(n);
    }
    else
    {
      cnt++;
    }
  }

  cnt += A.size();

  cout << cnt;

  return 0;
}