#!/usr/bin/python3
# 02_get_started.py

# Python Install
# Many PCs and Macs will have python already installed.
# To check if you have python installed on a Windows PC, search in the start bar for Python or run the following on the Command Line (cmd.exe):
#
# C:\Users\Your Name>python --version
#
# To check if you have python installed on a Linux or Mac, then on linux open the command line or on Mac open the Terminal and type:
#
# python --version
#
# If you find that you do not have Python installed on your computer, then you can download it for free from the following website: 
# https://www.python.org/
#
# Python Quickstart
# Python is an interpreted programming language.
# This means that as a developer you write Python (.py) files in a text editor and then put those files into the python interpreter to be executed.
# The way to run a python file is like this on the command line:
#
# C:\Users\Your Name>python helloworld.py
#
# Where "helloworld.py" is the name of your python file.
#
# In Unix, you can bestow executable permission with 
# chmod +x *.py
# ./script.y
#
# You will need a shebang line at the top of each Python file:
# #!/usr/bin/python3
# or the directory that contains your version of the Python intepreter.
#
# You can also run Python directly in the console by simply typing `python`.
# Any python code you write in this state will be run in the terminal.
# 
# `print("Hello World")` # returns 'Hello World'
# 
# You can exit this commandline state by exiting python with
# `exit()`

import sys

def main() -> None:
    print("Hello world")
    print(sys.version) # displays the current version of the Python editor.

if __name__ == "__main__":
    main()

