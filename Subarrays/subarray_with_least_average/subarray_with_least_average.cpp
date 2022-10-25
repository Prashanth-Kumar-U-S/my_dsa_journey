int solve(vector<int> &A, int B) {
    long long sum = 0;
    for(int i = 0; i < B; i++)
    {
        sum += A[i];
    }

    long long tmpSum = sum;
    int index = 0;
    int tmpIndex = 1;
    for(int i = B; i < A.size(); i++, tmpIndex++)
    {
        tmpSum +=  (A[i] - A[i - B]);
        if(tmpSum < sum)
        {
            sum = tmpSum;
            index = tmpIndex;
        }
    }
    return index;
}