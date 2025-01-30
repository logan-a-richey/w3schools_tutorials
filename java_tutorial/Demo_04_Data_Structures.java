/*******************************************************************************
W3Schools Java Tutorial
04_stdin_and_data_structures.java
*******************************************************************************/

/*
=== Java User IO and Data Structures ===
Java User Input (import java.util.Scanner;) (std::cin >>)
Java Date
Java ArrayList
Java LinkedList
Java List Sorting
Java HashMap
Java HashSet
Java Iterator
Java Wrapper Classes
Java Exceptions
Java RegEx
Java Threads
Java Lambda
Java Advanced Sorting
*/

import java.util.*;  // Import for Scanner, ArrayList, LinkedList, HashMap, etc.
import java.util.regex.*;  // Import for Regex
import java.text.*;  // Import for Date formatting

// Main Class to demonstrate User IO and Data Structures concepts
public class Demo_04_Data_Structures {

    public static void main(String[] args) {
        // Call methods for each concept example
        demoUserInput();
        demoJavaDate();
        demoArrayList();
        demoLinkedList();
        demoListSorting();
        demoHashMap();
        demoHashSet();
        demoIterator();
        demoWrapperClasses();
        demoExceptions();
        demoRegex();
        demoThreads();
        demoLambda();
        demoAdvancedSorting();
    }

    // Java User Input (using Scanner)
    static void demoUserInput() {
        System.out.println("=== Java User Input ===");
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        System.out.println("Hello, " + name + "!");
        scanner.close();
    }

    // Java Date
    static void demoJavaDate() {
        System.out.println("\n=== Java Date ===");
        Date date = new Date();
        System.out.println("Current Date: " + date);

        // Formatting the date
        SimpleDateFormat sdf = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        String formattedDate = sdf.format(date);
        System.out.println("Formatted Date: " + formattedDate);
    }

    // Java ArrayList
    static void demoArrayList() {
        System.out.println("\n=== Java ArrayList ===");
        ArrayList<String> list = new ArrayList<>();
        list.add("Apple");
        list.add("Banana");
        list.add("Orange");

        System.out.println("ArrayList: " + list);
        System.out.println("ArrayList size: " + list.size());
    }

    // Java LinkedList
    static void demoLinkedList() {
        System.out.println("\n=== Java LinkedList ===");
        LinkedList<String> linkedList = new LinkedList<>();
        linkedList.add("Red");
        linkedList.add("Green");
        linkedList.add("Blue");

        System.out.println("LinkedList: " + linkedList);
    }

    // Java List Sorting
    static void demoListSorting() {
        System.out.println("\n=== Java List Sorting ===");
        ArrayList<Integer> list = new ArrayList<>();
        list.add(42);
        list.add(5);
        list.add(19);
        list.add(8);

        Collections.sort(list);
        System.out.println("Sorted List: " + list);
    }

    // Java HashMap
    static void demoHashMap() {
        System.out.println("\n=== Java HashMap ===");
        HashMap<String, Integer> map = new HashMap<>();
        map.put("John", 25);
        map.put("Alice", 30);
        map.put("Bob", 22);

        System.out.println("HashMap: " + map);
        System.out.println("Value for key 'Alice': " + map.get("Alice"));
    }

    // Java HashSet
    static void demoHashSet() {
        System.out.println("\n=== Java HashSet ===");
        HashSet<String> set = new HashSet<>();
        set.add("Java");
        set.add("Python");
        set.add("C++");
        set.add("Java");  // Duplicates are not allowed

        System.out.println("HashSet: " + set);
    }

    // Java Iterator
    static void demoIterator() {
        System.out.println("\n=== Java Iterator ===");
        ArrayList<String> list = new ArrayList<>();
        list.add("One");
        list.add("Two");
        list.add("Three");

        Iterator<String> iterator = list.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
    }

    // Java Wrapper Classes
    static void demoWrapperClasses() {
        System.out.println("\n=== Java Wrapper Classes ===");
        int num = 5;
        Integer wrappedNum = Integer.valueOf(num);  // Wrapping the primitive into Integer
        System.out.println("Wrapped Integer: " + wrappedNum);
        
        Integer parsedNum = Integer.parseInt("123");
        System.out.println("Parsed Integer: " + parsedNum);
    }

    // Java Exceptions
    static void demoExceptions() {
        System.out.println("\n=== Java Exceptions ===");
        try {
            int result = 10 / 0;  // This will throw an ArithmeticException
        } catch (ArithmeticException e) {
            System.out.println("Exception caught: " + e);
        }

        try {
            String text = null;
            text.length();  // NullPointerException
        } catch (NullPointerException e) {
            System.out.println("Exception caught: " + e);
        }
    }

    // Java RegEx (Regular Expressions)
    static void demoRegex() {
        System.out.println("\n=== Java RegEx ===");
        String input = "hello123world";
        String pattern = "[a-z]+\\d+[a-z]+";
        
        Pattern regex = Pattern.compile(pattern);
        Matcher matcher = regex.matcher(input);
        
        if (matcher.matches()) {
            System.out.println("The input matches the pattern.");
        } else {
            System.out.println("The input does not match the pattern.");
        }
    }

    // Java Threads
    static void demoThreads() {
        System.out.println("\n=== Java Threads ===");
        
        // Create and start a new thread
        Thread thread = new Thread(() -> {
            System.out.println("This is a message from the thread.");
        });
        thread.start();
        
        try {
            thread.join();  // Wait for the thread to finish
        } catch (InterruptedException e) {
            System.out.println("Thread was interrupted.");
        }
    }

    // Java Lambda
    static void demoLambda() {
        System.out.println("\n=== Java Lambda ===");
        
        // Using Lambda Expression to define a function
        List<Integer> numbers = Arrays.asList(1, 2, 3, 4, 5);
        numbers.forEach(num -> System.out.println(num * 2));
    }

    // Java Advanced Sorting (using Comparator)
    static void demoAdvancedSorting() {
        System.out.println("\n=== Java Advanced Sorting ===");

        List<String> list = new ArrayList<>();
        list.add("Banana");
        list.add("Apple");
        list.add("Orange");
        
        // Sorting using a custom comparator (reverse order)
        Collections.sort(list, (a, b) -> b.compareTo(a));
        System.out.println("Sorted List (Reverse Order): " + list);
    }
}

