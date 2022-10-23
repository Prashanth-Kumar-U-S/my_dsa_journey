#include<iostream>
#include<vector>
using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int N;
    cin >> N;
    vector<int> A(N, 0);

    for(int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
    }
    int B;
    cin >> B;

    B = B % N;

    for(int i = 0; i < A.size(); i++)
    {
        cout<<A[(N - B + i) % N] <<" ";
    }
    return 0;
}