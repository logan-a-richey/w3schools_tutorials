/*******************************************************************************
W3Schools - C++ Tutorial
22_function_recursion.cpp
https://www.w3schools.com/cpp/cpp_functions_recursion.asp
2024-12-23
*******************************************************************************/

#include <iostream>

// Recursive Fibonacci function (with memoization)
long long fibonacci(int n, long long memo[]) {
    // Base case
    if (n <= 1) {
        return n;
    }

    // If already computed, return from memo
    if (memo[n] != -1) {
        return memo[n];
    }

    // Compute and store in memo array
    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main() {
    int n;
    std::cout << "Enter value to find fib(x). x = ";
    std::cin >> n;
    
    // Memoization array initialized with -1
    long long memo[n + 1];
    for (int i = 0; i <= n; ++i) {
        memo[i] = -1;
    }

    // Calculate and output Fibonacci(100)
    std::cout << "Fibonacci(" << n << ") = " << fibonacci(n, memo) << std::endl;

    return 0;
}
