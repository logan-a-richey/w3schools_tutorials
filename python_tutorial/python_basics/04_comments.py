#!/usr/bin/python3
# 04_comments.py

# comments are denoted with # and any text that follows for the rest of the line.

def main() -> None:
    ''' 
    This may look like a block comment, but this is actually a block string. 
    Triple single and triple double quotes are usually used to denote docstrings that describe functionality of functions and classes.
    '''
    
    my_string_block_message = """
    Line 1: This is a string block!
    Line 2: Pull me under, I'm not afraid
    Line 3: All that I feel is honor and spite
    Line 4: All I can do is to set it right!
    """

    print(main.__doc__)
    print(my_string_block_message)

if __name__ == "__main__":
    main()
