// 24_recursion.c

/*
    Recursion is the technique of making a function call itself. 
    This technique provides a way to break complicated problems down into simple problems which are easier to solve.
    Recursion may be a bit difficult to understand. 
    The best way to figure out how it works is to experiment with it.
*/

#include <stdio.h>

// declaration
int sum_factorial(int k);
int fibo(int n);

// main
int main(){
    int res;
    res = sum_factorial(9);
    printf("res = %d\n", res);

    res = fibo(5);
    printf("res = %d\n", res);
    
    return 0;
}

// implementation
int sum_factorial(int k){
    /*
        10 + sum(9)
        10 + ( 9 + sum(8) )
        10 + ( 9 + ( 8 + sum(7) ) )
        ...
        10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
        10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
    */

    if (k > 0) {
        return k + sum_factorial(k - 1);
    } else {
        return 0;
    }
}

int fibo(int n){
    if (n <= 1){
        return n; // base case: if n is 0 or 1, return n.
    }
    return fibo(n - 1) + fibo(n - 2); // recursive case
}

