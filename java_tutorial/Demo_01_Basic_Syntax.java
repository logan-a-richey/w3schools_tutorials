/*******************************************************************************
W3Schools Java Tutorial
01_basic_syntax.java
*******************************************************************************/

/* 
=== Basic Syntax ===
Java "Hello World" / System.out.println()
Java data types
    byte    : Stores whole numbers from -128 to 127
    short   : Stores whole numbers from -32,768 to 32,767
    int     : Stores whole numbers from -2,147,483,648 to 2,147,483,647
    long    : Stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    float   : Stores fractional numbers. Sufficient for storing 6 to 7 decimal digits
    double  : Stores fractional numbers. Sufficient for storing 15 to 16 decimal digits
    boolean : Stores true or false values
    char    : Stores a single character/letter or ASCII values
Java strings
Java operators
Java string concat
Java if, else if, and else
Java switch
Java while loop
Java for loop
Java break/continue
Java arrays

Everything in Java is OOP.
Let's create a Main class with several example functions to envoke.
*/

public class Demo_01_Basic_Syntax {
    // Example for Java "Hello World" / System.out.println()
    public static void example_01() {
        System.out.println("Hello, World!");
        System.out.println("I am learning Java.");
        System.out.print("It is awesome! ");
        System.out.print("This will print on the same line.\n");
        System.out.println(3); // Print numbers
        System.out.println(3 + 3); // Perform calculations
    }

    // Example for Java data types
    public static void example_02() {
        byte myByte = 100;
        short myShort = 10000;
        int myInt = 100000;
        long myLong = 10000000000L;
        float myFloat = 5.75f;
        double myDouble = 19.99;
        boolean isJavaFun = true;
        char myChar = 'A';
        float sciFloat = 35e3f; // not a new type, just demonstrating scientific notation
        double sciDec = 12E4d; // not a new type, just demonstrating scientific notation

        System.out.println("Byte value: " + myByte);
        System.out.println("Short value: " + myShort);
        System.out.println("Int value: " + myInt);
        System.out.println("Long value: " + myLong);
        System.out.println("Float value: " + myFloat);
        System.out.println("Double value: " + myDouble);
        System.out.println("Boolean value: " + isJavaFun);
        System.out.println("Char value: " + myChar);
        System.out.println("Scientific float value : " + sciFloat);
        System.out.println("Scientific decimal value : " + sciDec);
    }

    // Example for Java strings
    public static void example_03() {
        String myString = "Hello, Java!";
        System.out.println(myString);
        System.out.println("String length: " + myString.length());
        System.out.println("Uppercase: " + myString.toUpperCase());
        System.out.println("Lowercase: " + myString.toLowerCase());
        System.out.println("Character at index 0: " + myString.charAt(0));
        System.out.println("Substring: " + myString.substring(7));
    }

    // Example for Java operators
    public static void example_04() {
        int x = 10;
        int y = 20;
        System.out.println("Addition: " + (x + y));
        System.out.println("Subtraction: " + (x - y));
        System.out.println("Multiplication: " + (x * y));
        System.out.println("Division: " + (y / x));
        System.out.println("Modulus: " + (y % x));
    }

    // Example for Java string concatenation
    public static void example_05() {
        String firstName = "John";
        String lastName = "Doe";
        System.out.println("Full Name: " + firstName + " " + lastName);
    }

    // Example for Java if, else if, and else
    public static void example_06() {
        int age = 18;
        if (age < 18) {
            System.out.println("You are a minor.");
        } else if (age == 18) {
            System.out.println("You just became an adult!");
        } else {
            System.out.println("You are an adult.");
        }
    }

    // Example for Java switch
    public static void example_07() {
        int day = 3;
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            default:
                System.out.println("Invalid day");
        }
    }

    // Example for Java while loop
    public static void example_08() {
        int i = 1;
        while (i <= 5) {
            System.out.println("Count: " + i);
            i++;
        }
    }

    // Example for Java for loop
    public static void example_09() {
        for (int i = 1; i <= 5; i++) {
            System.out.println("Count: " + i);
        }
    }

    // Example for Java break/continue
    public static void example_10() {
        for (int i = 1; i <= 10; i++) {
            if (i == 5) {
                continue; // Skip 5
            }
            if (i == 8) {
                break; // Stop at 8
            }
            System.out.println("Count: " + i);
        }
    }

    // Example for Java arrays
    public static void example_11() {
        int[] myArray = {1, 2, 3, 4, 5};
        for (int i = 0; i < myArray.length; i++) {
            System.out.println("Element at index " + i + ": " + myArray[i]);
        }
    }
    
    // main
    public static void main(String[] args) {
        example_01(); // hello world / basic stdout
        example_02(); // data types
        example_03(); // strings
        example_04(); // operators
        example_05(); // string concat
        example_06(); // if else
        example_07(); // switch
        example_08(); // while loop
        example_09(); // for loop
        example_10(); // break continue
        example_11(); // arrays
    }
}

