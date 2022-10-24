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
    int minNum = 1000;
    int maxNum = 1;
    for(int i = 0; i < A.size(); i++)
    {
        cin >> A[i];
        if( A[i] > maxNum)
        {
            maxNum = A[i];
        }
        if( A[i] < minNum)
        {
            minNum = A[i];
        }
    }

    cout<<maxNum<<" "<<minNum;
    return 0;
}