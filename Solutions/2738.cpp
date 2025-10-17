#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int row, col;
  cin >> row >> col;

  vector<vector<int>> arr1(row, vector<int>(col));
  vector<vector<int>> arr2(row, vector<int>(col));

  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      cin >> arr1[i][j];
    }
  }

  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      cin >> arr2[i][j];
    }
  }

  for(int i = 0; i < row; i++)
  {
    for(int j = 0; j < col; j++)
    {
      cout << arr1[i][j] + arr2[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}