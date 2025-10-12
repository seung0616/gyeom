#include <iostream>
using namespace std;

int main() 
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int A, B;
    cin >> A >> B;

    cout << A + B << '\n' << A - B << '\n' 
         << A * B << '\n' << A / B << '\n'
         << A % B;

    return 0;
}