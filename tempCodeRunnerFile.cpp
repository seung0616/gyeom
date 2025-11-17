#include <iostream>
#include <vector>
using namespace std;

vector<int> sorted;
int K;
int cnt = 0;

void merge(vector<int>& v, int start, int middle, int end)
{
  if(start > end) return;

  int i = start;
  int j = middle + 1;
  int k = start;

  while(i <= middle && j <= end)
  {
    if(v[i] <= v[j]) 
    {
      sorted[k] = v[i];
      i++;
    }
    else
    {
      sorted[k] = v[j];
      j++;
    }

    k++;
  }

  if(i > middle)
  {
    for(int x = j; x <= end; x++)
    {
      sorted[k] = v[x];
      k++;
    }
  }
  else if(j > end)
  {
    for(int x = i; x <= middle; x++)
    {
      sorted[k] = v[x];
      k++;
    }
  }

  for(int x = start; x <= end; x++)
  {
    v[x] = sorted[x];

    cnt++;
    if(cnt == K) cout << sorted[x];
  }
}

void mergeSort(vector<int>& v, int start, int end)
{
  if(start < end)
  {
    int middle = (start + end) / 2;

    mergeSort(v, start, middle);
    mergeSort(v, middle + 1, end);
    merge(v, start, middle, end);
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N, K;
  cin >> N >> K;

  vector<int> v(N);
  sorted.resize(N);

  for(int i = 0; i < N; i++)
  {
    cin >> v[i];
  }

  mergeSort(v, 0, N - 1);

  if(cnt < K) cout << -1;

  return 0;
}