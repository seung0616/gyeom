/*정렬은 안정 정렬과 불안정 정렬이 있다. 
  안정정렬은 조건이 같을 때 입력 순서가 유지되는 정렬이고 불안정정렬은 그렇지 않은 정렬이다.
  sort함수는 불안정정렬이기 때문에 안정정렬인 stable_sort를 사용해야한다.
  또는 person 구조체에 인덱스를 추가해서 해결 할 수 있다.*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct person
{
  int age;
  string name;
};

bool compare(person a, person b)
{
  return a.age < b.age;
}

int main() 
{
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  vector<person> members(N);

  for(int i = 0; i < N; i++)
  {
    cin >> members[i].age >> members[i].name;
  }

  stable_sort(members.begin(), members.end(), compare);

  for(person member : members)
  {
    cout << member.age << ' ' << member.name << '\n';
  }

  return 0;
}