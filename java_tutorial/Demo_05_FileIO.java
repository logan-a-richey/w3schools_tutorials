/*******************************************************************************
W3Schools Java Tutorial
05_file_io.java
*******************************************************************************/

/*
=== Java File IO ===
Java Files
Java Create/Write Files
Java Read Files
Java Delete Files
*/

import java.io.*;  // Import for File, FileWriter, FileReader, BufferedReader, etc.

public class Demo_05_FileIO {

    public static void main(String[] args) {
        // Call methods for each File IO operation
        demoCreateWriteFiles();
        demoReadFiles();
        demoDeleteFiles();
    }

    // Java Create/Write Files
    static void demoCreateWriteFiles() {
        System.out.println("=== Java Create/Write Files ===");
        File file = new File("example.txt");

        try {
            // Creating a new file
            if (file.createNewFile()) {
                System.out.println("File created: " + file.getName());
            } else {
                System.out.println("File already exists.");
            }

            // Writing to the file
            FileWriter writer = new FileWriter(file);
            writer.write("Hello, this is a test file!\n");
            writer.write("This is the second line of the file.");
            writer.close();
            System.out.println("Successfully wrote to the file.");
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }

    // Java Read Files
    static void demoReadFiles() {
        System.out.println("\n=== Java Read Files ===");
        File file = new File("example.txt");

        try {
            // Reading from the file
            FileReader reader = new FileReader(file);
            BufferedReader bufferedReader = new BufferedReader(reader);

            String line;
            while ((line = bufferedReader.readLine()) != null) {
                System.out.println(line);
            }

            bufferedReader.close();
        } catch (IOException e) {
            System.out.println("An error occurred while reading the file.");
            e.printStackTrace();
        }
    }

    // Java Delete Files
    static void demoDeleteFiles() {
        System.out.println("\n=== Java Delete Files ===");
        File file = new File("example.txt");

        if (file.delete()) {
            System.out.println("Deleted the file: " + file.getName());
        } else {
            System.out.println("Failed to delete the file.");
        }
    }
}

