#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int>& arr, int start, int end)
{
  if(start >= end) return;

  int pivot = start;
  int a = start + 1;
  int b = end;

  while(true)
  {
    while(a <= end && arr[a] <= arr[pivot])
      a++;
    
    while(b > start && arr[b] > arr[pivot])
      b--;

    if(a > b) 
    {
      swap(arr[pivot], arr[b]);
      break;
    }
    
    swap(arr[a], arr[b]);
  }

  quickSort(arr, start, b - 1);
  quickSort(arr, b + 1, end);
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<int> arr(N);

  for(int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }

  quickSort(arr, 0, N - 1);

  for(int i = 0; i < N; i++)
  {
    cout << arr[i] << '\n';
  }

  return 0;
}