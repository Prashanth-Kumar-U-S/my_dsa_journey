#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &A, int B) {

   
    for(int i = 0; i < A.size(); i++)
    {
        for(int j = i + 1; j < A.size(); j++)
        {
            if((A[i] + A[j]) == B)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    vector<int> A = {1, 2, 3, 4, 5, 6};
    int B = 4;
    cout << solve(A, B) <<endl;
}