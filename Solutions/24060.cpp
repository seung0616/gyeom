#include <iostream>
#include <vector>
using namespace std;

vector<int> sorted;
int K;
int cnt = 0;
int result = -1;

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
      k++;
    }
    else
    {
      sorted[k] = v[j];
      j++;
      k++;
    }

    cnt++;

    if(cnt == K)
    {
      result = sorted[k - 1];
    }
  }

  while(j <= end)
  {
    sorted[k] = v[j];
    k++;
    j++;

    cnt++;

    if(cnt == K)
    {
       result = sorted[k - 1];
    }
  }

  while(i <= middle)
  {
    sorted[k] = v[i];
    k++;
    i++;
    
    cnt++;

    if(cnt == K)
    {
       result = sorted[k - 1];
    }
  }


  for(int x = start; x <= end; x++)
  {
    v[x] = sorted[x];
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

  int N;
  cin >> N >> K;

  vector<int> v(N);
  sorted.resize(N);

  for(int i = 0; i < N; i++)
  {
    cin >> v[i];
  }

  mergeSort(v, 0, N - 1);

  cout << result;

  return 0;
}