#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct person
{
  int num;
  int age;
  string name;
};

bool compare(person a, person b)
{
  if(a.age == b.age) return a.num < b.num;
  else return a.age < b.age;
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
    members[i].num = i;
    cin >> members[i].age >> members[i].name;
  }

  sort(members.begin(), members.end(), compare);

  for(person member : members)
  {
    cout << member.age << ' ' << member.name << '\n';
  }

  return 0;
}