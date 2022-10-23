#include<iostream>

using namespace std;

int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'cin' for input & 'cout' for output
    long long numOfNaturalNumbers = 0;
    cin >> numOfNaturalNumbers;
    numOfNaturalNumbers = (numOfNaturalNumbers * (numOfNaturalNumbers + 1)) / 2;
    cout << numOfNaturalNumbers;
    return 0;
}