#include<iostream>

using namespace std;
#define START_MULTIPLIER (1u)
#define END_MULTIPLIER (10u)

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    long long A;
    cin >> A;

    for(long long i = START_MULTIPLIER; i <= END_MULTIPLIER; i++)
    {
        cout<<A<<" * "<<i<<" = "<<A * i<<std::endl;
    }
    return 0;
}