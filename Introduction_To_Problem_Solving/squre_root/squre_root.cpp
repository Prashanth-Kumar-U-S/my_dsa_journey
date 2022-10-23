#include <iostream>
using namespace std;
int solve(int A) {

    for(int i = 1; i * i <= A; i++)
    {
        if((i * i) == A)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int A;
    cin >> A;
    cout << solve(A);
}