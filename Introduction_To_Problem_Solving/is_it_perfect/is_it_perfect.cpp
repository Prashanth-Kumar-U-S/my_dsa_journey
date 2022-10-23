#include<iostream>

using namespace std;

string isPerfectNum(int &A)
{
    int sum = 1;
    for(int i = 2; i < A; i++)
    {
        if(A % i == 0)
        {
            sum += i;
        }
    }

    if( sum == A)
    {
        return "YES";
    }
    return "NO";
}
int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int N;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for(int i = 0; i < N; i++)
    {
        cout<<isPerfectNum(A[i])<<endl;
    }
    return 0;
}