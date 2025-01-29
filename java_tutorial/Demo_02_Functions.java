/*******************************************************************************
W3Schools Java Tutorial
02_functions.java
*******************************************************************************/

/*
=== Java Functions ===
Java functions
Java function params
Java method overloading
Java scope
Java recursion
*/

public class Demo_02_Functions {

    // Method to greet the user
    static void greet(String name) {
        System.out.println("Hello, " + name + "!");
    }

    // Method to add two integers (method overloading)
    static int add(int a, int b) {
        return a + b;
    }

    // Overloaded method to add two doubles
    static double add(double a, double b) {
        return a + b;
    }

    // Recursive method to calculate Fibonacci numbers
    static int fibonacci(int n) {
        if (n <= 1) {
            return n;  // Base case: fibonacci(0) = 0, fibonacci(1) = 1
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
        }
    }

    public static void main(String[] args) {
        // Demonstrating function calls
        greet("Alice");  // Calling the greet method

        // Demonstrating method overloading
        System.out.println("Sum of 2 and 3: " + add(2, 3));  // Calls add(int, int)
        System.out.println("Sum of 2.5 and 3.7: " + add(2.5, 3.7));  // Calls add(double, double)

        // Demonstrating recursion with Fibonacci numbers
        int n = 6;
        System.out.println("Fibonacci number at position " + n + ": " + fibonacci(n));  // Calls fibonacci(int)

        // Showing variable scope
        int localVar = 10;  // Local variable in main method
        System.out.println("Local variable in main method: " + localVar);
        
        // Showing class scope variable
        System.out.println("Class level variable: " + classScopeVar); // Can access class-level variables
    }

    // Class-level variable (scope)
    static int classScopeVar = 100;  // Can be accessed by any static method in the class
}


