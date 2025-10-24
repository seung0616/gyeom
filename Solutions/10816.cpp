#include <iostream>
#include <unordered_map>
using namespace std;
int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  unordered_map<long long int, int> cards;

  for(int i = 0; i < N; i++)
  {
    long long int n;
    cin >> n;

    cards[n]++;
  }

  int M;
  cin >> M;

  for(int i = 0; i < M; i++)
  {
    long long int n;
    cin >> n;

    cout << cards[n] << ' ';
  }

  return 0;
}