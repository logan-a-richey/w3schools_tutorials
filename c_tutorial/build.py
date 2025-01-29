#!/usr/bin/python3

import os
import subprocess

# Get the current working directory
cwd = os.getcwd()

# List all files in the current directory and filter only .c files
c_files = [filename for filename in os.listdir(cwd) if filename.endswith(".c")]

# Sort the list of .c files alphabetically
c_files.sort()

# Loop through each .c file in alphabetical order
for filename in c_files:
    # Construct the command to compile the .c file
    output_file = filename.replace(".c", "")  # Use the base name for the output
    compile_command = f"gcc -o {output_file} {filename}"

    # Run the compile command using subprocess
    try:
        print(f"Compiling {filename}...")
        subprocess.run(compile_command, check=True, shell=True)
        print(f"Successfully compiled {filename} to {output_file}")
    except subprocess.CalledProcessError as e:
        print(f"Error compiling {filename}: {e}")

