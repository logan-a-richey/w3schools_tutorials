#!/usr/bin/python3
# 06_data_types.py

# Text Type: 	    str
# Numeric Types: 	int, float, complex
# Sequence Types: 	list, tuple, range
# Mapping Type: 	dict
# Set Types: 	    set, frozenset
# Boolean Type: 	bool
# Binary Types: 	bytes, bytearray, memoryview
# None Type: 	    NoneType

def main() -> None:
    vars = [
        str("Hello world"),
        int(20),
        float(20.5),
        complex(1j),
        list(['a', 'b', 'c']),
        tuple(('a', 'b', 'c')),
        range(5),
        dict({'a':1, 'b':2, 'c':3}),
        frozenset({'a','b','c'}),
        bool(True),
        b"Hello",
        bytearray(5),
        memoryview(bytes(5)),
        None  
    ]
    
    # Define spacing variables for a nice table print!
    s1 = s2 = 0
    for var in vars:
        s1 = max(s1, len(str(var)))
        s2 = max(s2, len(str(type(var))))
    
    # Print the header with aligned columns
    print("{:<{}} | {:<{}}".format("Var", s1, "Type", s2))
    print("{:<{}}-+-{:<{}}".format("-" * s1, s1, "-" * s2, s2))  # Separator line
    
    # Print the variables and their types
    for var in vars:
        # Clean up the type name (remove 'class' and the surrounding angle brackets)
        var_type = str(type(var)).split("'")[1]
        print("{:<{}} | {:<{}}".format(str(var), s1, var_type, s2))
    
    return None

if __name__ == "__main__":
    main()

