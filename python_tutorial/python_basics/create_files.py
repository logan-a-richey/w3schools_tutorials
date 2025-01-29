#!/usr/bin/python3

import sys
import os
import re

# Check if the script is provided with the input file
if len(sys.argv) != 2:
    print("Usage: ./script.py <input_file>")
    sys.exit(1)

myfile = sys.argv[1]

# Check if the file exists
if not os.path.exists(myfile):
    print(f"Error: File '{myfile}' not found.")
    sys.exit(1)

try:
    with open(myfile, 'r') as file:
        for idx, line in enumerate(file):
            line = line.strip()
            if not line:  # Skip empty lines
                continue
            
            # Remove 'Python', trim leading and trailing whitespace, and convert to lowercase
            line = line.replace("Python", "").strip().lower()
            
            # Replace all non-alphanumeric characters with '_'
            line = re.sub(r'[^a-z0-9]', '_', line)
            
            # Replace multiple underscores with a single underscore
            line = re.sub(r'_+', '_', line)
            
            # Construct filename
            filename = f"{idx:02d}_{line}.py"
            
            # Write content to the file
            with open(filename, 'w') as outfile:
                outfile.write(f"#!/usr/bin/python3\n")
                outfile.write(f"# {filename}\n\n")
                outfile.write("def main() -> None:\n")
                outfile.write('    print("Hello world")\n\n')
                outfile.write('if __name__ == "__main__":\n')
                outfile.write('    main()\n')
            
            print(f"Created file: {filename}")

except Exception as e:
    print(f"An error occurred: {e}")

