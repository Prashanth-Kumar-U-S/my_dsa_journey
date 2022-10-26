int Solution::maxSubarray(int A, int B, vector<int> &C) {

    int start = 0; 
    int end = 0;
    long long curSum = 0;
    long long mxSum = 0;
    while(end < A)
    {
        curSum += C[end];
        while((B < curSum) && (start <= end) )
        {
            curSum -= C[start];
            start++;
        }
        mxSum = max(mxSum, curSum);
        end++;
    }
    return mxSum;
}