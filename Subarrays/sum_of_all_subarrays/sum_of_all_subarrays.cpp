#include <iostream>
using namespace std;
#include <vector>

long subarraySum(vector<int> &A) {
    long long sum = 0;
    for(int i = 0;  i < A.size(); i++)
    {
        sum += (A.size() - i) * (i + 1) * A[i];
    }
    return sum;
}

int main()
{
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    long long sum = subarraySum(A);
    cout<<"sum: " <<sum<<std::endl;
    return 0;
}