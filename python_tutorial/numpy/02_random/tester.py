#!/usr/bin/env python3
# tester.py


class Tester:
    '''Helper class to neat print tests.'''

    def __init__(self, funcs) -> None:
        self.funcs: list = funcs

    def _nice_print_docstring(self, doc) -> None:
        '''Print docstring without unwanted whitespace'''
        doc = doc.strip()
        lines = doc.split('\n')
        for line in lines:
            print(line.strip())

    def run(self) -> None:
        for i,f in enumerate(self.funcs):
            if callable(f):
                print('_' * 80)
                print("Example {}:".format(str(i).rjust(2, '0')))
                self._nice_print_docstring(f.__doc__)
                f()
                print()
            else:
                print("[W] Could not call Example {}".format(str(i).rjust(2, '0')))


def myfunc1():
    ''' myfunc1 doc '''
    print("Hello there!")

def myfunc2():
    ''' myfunc2 doc '''
    print("General Kenobi...")

def main():
    ''' Usage '''
    examples = [ex01, ex02]
    t = Tester(examples)
    t.run()

if __name__ == "__main__":
    main()

