#include <iostream>
int main()  {
    // YOUR CODE GOES HERE
    // Please take input and print output to standard input/output (stdin/stdout)
    // E.g. 'scanf' for input & 'printf' for output
    int A, i, flag;
    std::cin >> A;
    
    flag = 1;
    
    for (i = 2; i < A; i++){
        if(A % i == 0){
            // i divides A , therefore it is not a prime
            flag = 0;
            break;
        }
    }
    
    if(flag){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
