#include<bits/stdc++.h>
using namespace std;
bool isPresent(vector<int> &A, int a)
{
    for(int i = 0; i < A.size(); i++)
    {
        if(A[i] == a)
        {
            return true;
        }
    }
    return false;
}
int main(){
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int T;
    cin >> T;

    for(int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        vector<int> A(N, 0);

        for(int i = 0; i < A.size(); i++)
        {
            cin >> A[i];
        }

        int B;
        cin >> B;
        if(isPresent(A, B))
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"0\n";
        }
    }

    return 0;
}