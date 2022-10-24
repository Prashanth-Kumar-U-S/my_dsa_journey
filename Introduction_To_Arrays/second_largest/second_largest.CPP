int Solution::solve(vector<int> &A) {

    int largestEle = -1;
    int secondLargest = -1;

    for(int i = 0; i < A.size(); i++)
    {
        if(largestEle < A[i])
        {
            if(secondLargest < largestEle)
            {
                secondLargest = largestEle;
            }
            largestEle = A[i];
        }
        else if((largestEle > A[i]) && (secondLargest < A[i]))
        {
            secondLargest = A[i];
        }
    }

    return secondLargest;
}