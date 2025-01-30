/*******************************************************************************
W3Schools Java Tutorial
06_how_to.java
*******************************************************************************/

/*
=== Java How To's ===
Add Two Numbers
Count Words
Reverse a String
Sum of Array Elements
Convert String to Array
Sort an Array
Find Array Average
Find Smallest Element
ArrayList Loop
HashMap Loop
Loop Through an Enum
Area of Rectangle
Even or Odd Number
Positive or Negative
Square Root
Random Number
*/

import java.util.*;  // Import for ArrayList, HashMap, etc.

public class Demo_06_HowTo {

    public static void main(String[] args) {
        // Call methods for each Java "How To" operation
        demoAddTwoNumbers();
        demoCountWords();
        demoReverseString();
        demoSumOfArrayElements();
        demoConvertStringToArray();
        demoSortArray();
        demoFindArrayAverage();
        demoFindSmallestElement();
        demoArrayListLoop();
        demoHashMapLoop();
        demoLoopThroughEnum();
        demoAreaOfRectangle();
        demoEvenOrOddNumber();
        demoPositiveOrNegative();
        demoSquareRoot();
        demoRandomNumber();
    }

    // Add Two Numbers
    static void demoAddTwoNumbers() {
        System.out.println("=== Add Two Numbers ===");
        int a = 10, b = 20;
        int sum = a + b;
        System.out.println("Sum: " + sum);
    }

    // Count Words in a String
    static void demoCountWords() {
        System.out.println("\n=== Count Words ===");
        String sentence = "This is a test sentence.";
        String[] words = sentence.split(" ");
        System.out.println("Word Count: " + words.length);
    }

    // Reverse a String
    static void demoReverseString() {
        System.out.println("\n=== Reverse a String ===");
        String str = "Hello World!";
        String reversed = new StringBuilder(str).reverse().toString();
        System.out.println("Reversed String: " + reversed);
    }

    // Sum of Array Elements
    static void demoSumOfArrayElements() {
        System.out.println("\n=== Sum of Array Elements ===");
        int[] arr = {1, 2, 3, 4, 5};
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        System.out.println("Sum: " + sum);
    }

    // Convert String to Array
    static void demoConvertStringToArray() {
        System.out.println("\n=== Convert String to Array ===");
        String str = "Java";
        char[] charArray = str.toCharArray();
        System.out.println("Array: " + Arrays.toString(charArray));
    }

    // Sort an Array
    static void demoSortArray() {
        System.out.println("\n=== Sort an Array ===");
        int[] arr = {5, 3, 8, 1, 2};
        Arrays.sort(arr);
        System.out.println("Sorted Array: " + Arrays.toString(arr));
    }

    // Find Array Average
    static void demoFindArrayAverage() {
        System.out.println("\n=== Find Array Average ===");
        int[] arr = {10, 20, 30, 40, 50};
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        double average = (double) sum / arr.length;
        System.out.println("Average: " + average);
    }

    // Find Smallest Element in an Array
    static void demoFindSmallestElement() {
        System.out.println("\n=== Find Smallest Element ===");
        int[] arr = {45, 32, 10, 9, 72};
        int min = Arrays.stream(arr).min().getAsInt();
        System.out.println("Smallest Element: " + min);
    }

    // Loop Through an ArrayList
    static void demoArrayListLoop() {
        System.out.println("\n=== ArrayList Loop ===");
        ArrayList<String> list = new ArrayList<>();
        list.add("Java");
        list.add("Python");
        list.add("C++");
        
        System.out.println("ArrayList Elements:");
        for (String lang : list) {
            System.out.println(lang);
        }
    }

    // Loop Through a HashMap
    static void demoHashMapLoop() {
        System.out.println("\n=== HashMap Loop ===");
        HashMap<String, Integer> map = new HashMap<>();
        map.put("John", 25);
        map.put("Alice", 30);
        map.put("Bob", 22);

        System.out.println("HashMap Elements:");
        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }
    }

    // Loop Through an Enum
    static void demoLoopThroughEnum() {
        System.out.println("\n=== Loop Through an Enum ===");
        for (Day day : Day.values()) {
            System.out.println(day);
        }
    }

    // Enum Example
    enum Day {
        MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY;
    }

    // Area of Rectangle
    static void demoAreaOfRectangle() {
        System.out.println("\n=== Area of Rectangle ===");
        double length = 5.0;
        double width = 3.0;
        double area = length * width;
        System.out.println("Area: " + area);
    }

    // Check Even or Odd Number
    static void demoEvenOrOddNumber() {
        System.out.println("\n=== Even or Odd Number ===");
        int num = 7;
        if (num % 2 == 0) {
            System.out.println(num + " is even.");
        } else {
            System.out.println(num + " is odd.");
        }
    }

    // Check Positive or Negative Number
    static void demoPositiveOrNegative() {
        System.out.println("\n=== Positive or Negative Number ===");
        int num = -5;
        if (num > 0) {
            System.out.println(num + " is positive.");
        } else if (num < 0) {
            System.out.println(num + " is negative.");
        } else {
            System.out.println(num + " is zero.");
        }
    }

    // Square Root
    static void demoSquareRoot() {
        System.out.println("\n=== Square Root ===");
        double num = 16;
        double squareRoot = Math.sqrt(num);
        System.out.println("Square Root of " + num + ": " + squareRoot);
    }

    // Generate Random Number
    static void demoRandomNumber() {
        System.out.println("\n=== Random Number ===");
        Random rand = new Random();
        int randomNum = rand.nextInt(100); // Random number between 0 and 99
        System.out.println("Random Number: " + randomNum);
    }
}

