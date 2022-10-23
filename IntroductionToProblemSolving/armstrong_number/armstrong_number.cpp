#include<iostream>
using namespace std;

bool isArmStrong(int A)
{
    int digitCount = 0;
    int a = A;

    while(a)
    {
        a = a / 10;
        digitCount++;
    }

    long long sum = 0;
    a = A;

    for(int i = 0; i < digitCount; i++)
    {
        long long lastDigit = a % 10;
        long long mul = 1;
        for( int j = 0; j < digitCount; j++)
        {
            mul = mul * lastDigit;
        }
        sum += mul;
        a = a / 10;
    }

    return A == sum;
}

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    int N;
    cin >> N;

    cout<< "1"<<endl;
    for(int i = 10; i <= N; i++)
    {
        if(isArmStrong(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}