int Solution::solve(vector<int> &A) {

    int N = A.size();
    int maxEvn = INT_MIN;
    int minOdd = INT_MAX;
    for(int &num:A)
    {
        if((num & 1) == 0) // even
        {
            maxEvn =  max(maxEvn, num);
        }
        else // minOdd
        {
            minOdd =  min(minOdd, num);
        }
    }
    return (maxEvn - minOdd);
}