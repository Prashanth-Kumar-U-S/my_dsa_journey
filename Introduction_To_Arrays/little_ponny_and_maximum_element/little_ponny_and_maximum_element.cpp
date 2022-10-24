int Solution::solve(vector<int> &A, int B) {
    int countGreaterThanB = 0;
    int countOfB = 0;
    for(int i = 0;  i < A.size(); i++)
    {
        if(A[i] > B)
        {
            countGreaterThanB++;
        }
        else if( A[i] == B)
        {
            countOfB++;
        }
    }

    return countOfB == 0 ? -1 : countGreaterThanB;
}