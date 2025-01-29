/*******************************************************************************
W3Schools Java Tutorial
03_oop.java
*******************************************************************************/

/*
=== Java Classes ===
Java OOP
Java Classes/Objects
Java Class Attributes
Java Class Methods
Java Constructors
Java Modifiers
Java Encapsulation
Java Packages / API
Java Inheritance
Java Polymorphism
Java Inner Classes
Java Abstraction
Java Interface (similar to Python's abstract class)
Java Enums
*/

// Enum for Days of the Week
enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY }

// Abstract Class for Animal (Abstraction)
abstract class Animal {
    abstract void sound();  // Abstract method (doesn't have body)

    void eat() {
        System.out.println("This animal is eating.");
    }
}

// Dog class inherits from Animal (Inheritance)
class Dog extends Animal {
    @Override
    void sound() {
        System.out.println("Bark");
    }
}

// Vehicle Class
class Vehicle {
    String model;

    void start() {
        System.out.println("Vehicle starting...");
    }
}

// Car class inherits from Vehicle and implements additional functionality (Inheritance + Polymorphism)
class Car extends Vehicle {
    String color;

    Car(String model, String color) {
        this.model = model;
        this.color = color;
    }

    void honk() {
        System.out.println("Car honking...");
    }

    @Override
    void start() {
        System.out.println("Car " + model + " is starting...");
    }

    void displayDetails() {
        System.out.println("Car model: " + model);
        System.out.println("Car color: " + color);
    }
}

// Main Class to demonstrate OOP concepts
public class Demo_03_Classes {

    public static void main(String[] args) {
        // Call methods for each OOP concept example
        demoClassesAndObjects();
        demoClassAttributes();
        demoClassMethods();
        demoConstructors();
        demoModifiers();
        demoEncapsulation();
        demoPackagesAPI();
        demoInheritance();
        demoPolymorphism();
        demoInnerClasses();
        demoAbstraction();
        demoInterface();
        demoEnums();
    }

    // Java Classes and Objects
    static void demoClassesAndObjects() {
        System.out.println("=== Java Classes and Objects ===");
        Car myCar = new Car("Toyota", "Red");
        myCar.displayDetails();
        myCar.start();
    }

    // Java Class Attributes
    static void demoClassAttributes() {
        System.out.println("\n=== Java Class Attributes ===");
        Car myCar = new Car("Honda", "Blue");
        myCar.color = "Blue";
        System.out.println("Car color: " + myCar.color);
    }

    // Java Class Methods
    static void demoClassMethods() {
        System.out.println("\n=== Java Class Methods ===");
        Car myCar = new Car("BMW", "Black");
        myCar.start();
        myCar.honk();
    }

    // Java Constructors
    static void demoConstructors() {
        System.out.println("\n=== Java Constructors ===");
        Car myCar = new Car("Audi", "White");
        myCar.displayDetails();
    }

    // Java Modifiers (Access Modifiers)
    static void demoModifiers() {
        System.out.println("\n=== Java Modifiers ===");
        // Demonstrating 'private' modifier
        Vehicle vehicle = new Vehicle();
        vehicle.model = "Ford";
        System.out.println("Vehicle model: " + vehicle.model);
    }

    // Java Encapsulation
    static void demoEncapsulation() {
        System.out.println("\n=== Java Encapsulation ===");
        Car myCar = new Car("Tesla", "Silver");
        myCar.displayDetails();
        // Encapsulation using setter method (example if setter method were created)
        // myCar.setColor("Yellow");
    }

    // Java Packages and API
    static void demoPackagesAPI() {
        System.out.println("\n=== Java Packages and API ===");
        // Importing the Date class from java.util package
        java.util.Date date = new java.util.Date();
        System.out.println("Current Date: " + date);
    }

    // Java Inheritance
    static void demoInheritance() {
        System.out.println("\n=== Java Inheritance ===");
        Dog myDog = new Dog();
        myDog.sound();
        myDog.eat();  // Inherited method
    }

    // Java Polymorphism
    static void demoPolymorphism() {
        System.out.println("\n=== Java Polymorphism ===");
        Vehicle myCar = new Car("Chevy", "Green");
        myCar.start();  // This calls the overridden start() method in Car
    }

    // Java Inner Classes
    static void demoInnerClasses() {
        System.out.println("\n=== Java Inner Classes ===");
        OuterClass outer = new OuterClass();
        OuterClass.InnerClass inner = outer.new InnerClass();
        inner.display();
    }

    // Java Abstraction
    static void demoAbstraction() {
        System.out.println("\n=== Java Abstraction ===");
        Animal myDog = new Dog();
        myDog.sound();
        myDog.eat();  // Calls inherited method
    }

    // Java Interface
    static void demoInterface() {
        System.out.println("\n=== Java Interface ===");
        Car myCar = new Car("Mercedes", "Gold");
        myCar.displayDetails();
    }

    // Java Enums
    static void demoEnums() {
        System.out.println("\n=== Java Enums ===");
        Day today = Day.MONDAY;
        switch (today) {
            case MONDAY:
                System.out.println("Start of the week!");
                break;
            case FRIDAY:
                System.out.println("Almost the weekend!");
                break;
        }
    }
}

// Outer Class Example for Inner Class demonstration
class OuterClass {
    int outerVar = 10;

    // Inner class
    class InnerClass {
        void display() {
            System.out.println("Outer class variable: " + outerVar);
        }
    }
}


