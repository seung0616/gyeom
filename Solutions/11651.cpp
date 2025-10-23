#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
  int x, y;
};

bool compare(Node a, Node b)
{
  if(a.y == b.y) return a.x < b.x;
  else return a.y < b.y;
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<Node> nodes(N);

  for(int i = 0; i < N; i++)
  {
    cin >> nodes[i].x >> nodes[i].y;
  }

  sort(nodes.begin(), nodes.end(), compare);

  for(int i = 0; i < N; i++)
  {
    cout << nodes[i].x << ' ' << nodes[i].y << '\n';
  }

  return 0;
}