#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<double> scores(N);
  double M = 0;

  for(int i = 0; i < N; i++)
  {
    cin >> scores[i];

    M = max(M, scores[i]);
  }

  double sum = 0;

  for(int i = 0; i < N; i++)
  {
    sum += scores[i] / M * 100;
  }

  cout << sum / N;

  return 0;
}