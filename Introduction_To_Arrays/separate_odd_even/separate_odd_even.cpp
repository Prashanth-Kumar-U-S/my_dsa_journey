#include<iostream>
#include<vector>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int T;
    cin >> T;
    vector<vector<int>> A;

    for(int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        vector<int> B;

        for(int j = 0; j < N; j++)
        {
            int a;
            cin >> a;
            B.push_back(a);
            // cout<<a <<", ";
        }
        // cout<<"B.size(): " <<B.size();
        A.push_back(B);
        // cout<<"\nA[i].size(): " <<A[i].size();
    }

    for(int i = 0; i < T; i++)
    {
            // cout<<"A[i].size(): " <<A[i].size();
        for(int j = 0; j < A[i].size(); j++)
        {

            if((A[i][j] & 1) == 1)
            {
                cout << A[i][j]  <<" ";
            }
        }
        cout <<"\n";
        for(int j = 0; j < A[i].size(); j++)
        {
            if((A[i][j] & 1) == 0)
            {
                cout << A[i][j] <<" ";
            }
        }
        cout <<"\n";
    }

    return 0;
}