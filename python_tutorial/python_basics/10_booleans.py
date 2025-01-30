#!/usr/bin/python3
# 10_booleans.py

def main() -> None:
    # Boolean Values
    print(10 > 9)
    print(10 == 9)
    print(10 < 9) 

    a, b = 55, 33

    if b > a:
        print("b is greater than a")
    else:
        print("b is not greater than a") 
    
    # Evaluate Values and Variables
    print(bool("Hello"))
    print(bool(15))

    # Most Values are True
    # Almost any value is evaluated to True if it has some sort of content.
    # Any string is True, except empty strings.
    # Any number is True, except 0.
    # Any list, tuple, set, and dictionary are True, except empty ones.
    print(bool("abc"))
    print(bool(123))
    print(bool(["apple", "cherry", "banana"]))

    # The following values are False:
    print(bool(False))
    print(bool(None))
    print(bool(0))
    print(bool(""))
    print(bool(()))
    print(bool([]))
    print(bool({}))

    # One more value, or object in this case, evaluates to False, and that is if
    # you have an object that is made from a class with a __len__ function that 
    # returns 0 or False: 
    class myclass():
      def __len__(self):
        return 0

    myobj = myclass()
    print(bool(myobj)) 
    
    # Functions can Return a Boolean
    def myFunc() -> bool:
        return True
    
    print(myFunc())
    if myFunc():
        print("YES!")
    else:
        print("NO!") 
  
    # Python also has many built-in functions that return a boolean value, like 
    # the isinstance() function, which can be used to determine if an object is 
    # of a certain data type:
    x = 200
    print(isinstance(x, int)) 


if __name__ == "__main__":
    main()

