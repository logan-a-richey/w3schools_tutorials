#!/usr/bin/python3
# build_all.py

import os
import subprocess
import time

def compile_cpp_files():
    # Get the current working directory
    cwd = os.getcwd()
    
    # Get all .cpp files in the current working directory
    cpp_files = [filename for filename in os.listdir(cwd) if filename.endswith(".cpp")]
    
    # Sort the list of .cpp files alphabetically
    cpp_files.sort()
    
    # Loop through all sorted .cpp files
    for filename in cpp_files:
        # Get the name without the .cpp extension
        output_name = filename[:-4]
        
        # Check if the .cpp file is newer than the output file
        cpp_file_path = os.path.join(cwd, filename)
        output_file_path = os.path.join(cwd, output_name)
        
        # Get the last modified time of the .cpp file and the output file (if it exists)
        cpp_file_mtime = os.path.getmtime(cpp_file_path)
        
        if os.path.exists(output_file_path):
            output_file_mtime = os.path.getmtime(output_file_path)
        else:
            output_file_mtime = 0  # If the output file doesn't exist, treat it as modified
        
        # Only compile if the .cpp file is newer than the output file or the output file doesn't exist
        if cpp_file_mtime > output_file_mtime:
            print(f"{filename} has been modified, recompiling...")
            command = ["g++", filename, "-o", output_name]
            
            try:
                # Run the command
                subprocess.run(command, check=True)
                print(f"Compiled {filename} to {output_name}")
            except subprocess.CalledProcessError as e:
                print(f"Error compiling {filename}: {e}")
        else:
            print(f"{filename} is up to date, skipping.")

if __name__ == "__main__":
    compile_cpp_files()

