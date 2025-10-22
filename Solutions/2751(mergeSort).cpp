#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
vector<int> sorted;

void merge(int start, int middle, int end)
{
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

  if(j > end)
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
  }
}

void mergeSort(int start, int end)
{
  if(start < end)
  {
    int middle = (start + end) / 2;
    mergeSort(start, middle);
    mergeSort(middle + 1, end);
    merge(start, middle, end);
  }
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  v.resize(N);
  sorted.resize(N);

  for(int i = 0; i < N; i++)
  {
    cin >> v[i];
  }

  mergeSort(0, N - 1);

  for(int i = 0; i < N; i++)
  {
    cout << v[i] << '\n';
  }

  return 0;
}