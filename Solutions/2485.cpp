#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<long long int> trees(N);
  vector<long long int> distances;

  for(int i = 0; i < N; i++)
  {
    cin >> trees[i];
  }

  for(int i = 1; i < N; i++)
  {
    long long int distance = trees[i] - trees[i - 1];

    distances.push_back(distance);
  }

  long long int gcd = distances[0];

  for(int i = 0; i < distances.size(); i++)
  {
    gcd = __gcd(distances[i], gcd);
  }

  int result = (trees.back() - trees[0]) / gcd + 1; // 구간 / 간격의 길이 를 했기 때문에 간격의 개수가 나온다. 따라서 점(나무)의 개수를 구하기 위해서 +1을 해준다.

  cout << result - N; //총 나무의 개수 - 원래 심어져 있던 나무의 개수

  return 0;
}