vector<int> leftRot(vector<int> &A, int B)
{
    vector<int> C;

    for(int i = 0; i < A.size(); i++)
    {
        C.push_back(A[(i + B) % A.size()]);
    }
    return C;
}

vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {


    vector<vector<int>> sol;

    for(int i = 0; i < B.size(); i++)
    {
        sol.push_back(leftRot(A, B[i] % A.size()));
    }
    return sol;
}