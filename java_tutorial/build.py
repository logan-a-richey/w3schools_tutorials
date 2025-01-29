#!/usr/bin/python3

# script to build all java files in the current working directory

import os
import subprocess

def compile_java_files():
    # Get the current working directory
    cwd = os.getcwd()
    
    # Find all .java files in the current working directory
    java_files = [f for f in os.listdir(cwd) if f.endswith('.java')]
    
    if not java_files:
        print("No Java files found in the current directory.")
        return

    # Print the list of Java files to be compiled
    print("Compiling the following Java files:")
    for java_file in java_files:
        print(f"- {java_file}")
    
    # Use javac to compile the .java files
    try:
        # Execute javac command with the list of Java files
        result = subprocess.run(['javac'] + java_files, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        
        # Output the result
        print(result.stdout.decode())
        print("Compilation successful.")
        
    except subprocess.CalledProcessError as e:
        # In case of compilation error, print the error message
        print("Compilation failed.")
        print(e.stderr.decode())

if __name__ == "__main__":
    compile_java_files()

