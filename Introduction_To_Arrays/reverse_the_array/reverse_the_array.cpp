#include<iostream>
#include<vector>
using namespace std;

vector<int> solve(const vector<int> &A) {

    vector<int> revA(A.size(), 0);

    for(int i = 0; i < A.size(); i++)
    {
        revA[i] = A[A.size() - 1 - i];
    }
    return revA;
}

int main()
{
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> B = solve(A);
    
    for(int i = 0; i < B.size(); i++)
    {
        cout<<B[i]<<", ";
    }
    return 0;
}