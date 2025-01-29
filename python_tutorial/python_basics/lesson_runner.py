#!/usr/bin/python3
# lesson_runner.py

class LessonRunner:
    """
    A utility class to run and display lessons dynamically.
    Contains a run() method with 1 param that accepts a list of functions.
    """

    @staticmethod
    def run(lessons: list) -> None:
        """
        Takes a list of functions and executes them in order.
        Ensures that each item is a callable function.
        """
        def format_lesson_name(func_name: str) -> str:
            """Formats function names into a readable lesson title."""
            return " ".join(word.capitalize() for word in func_name.split("_"))

        separator = "_" * 100

        for lesson_number, lesson_func in enumerate(lessons, start=1):
            if not callable(lesson_func):  # Ensure the item is a function
                print(f"Skipping invalid lesson #{lesson_number}: {lesson_func} (Not a function)")
                continue

            lesson_title = format_lesson_name(lesson_func.__name__)
            lesson_doc = lesson_func.__doc__.strip() if lesson_func.__doc__ else "No documentation provided."

            print(f"\n{separator}\nLesson #{lesson_number}: {lesson_title}\n{lesson_doc}\n{separator}")
            lesson_func()
            print()

