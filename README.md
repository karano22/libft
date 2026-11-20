This project has been created as part of the 42 curriculum by ksandhu.

Libft

Description

Libft is a static C library (libft.a) containing 43 reusable functions for future projects in the 42 curriculum. The library is divided into three mandatory parts:

Part 1 — Libc functions (23): Character checks and conversions, string operations, memory functions, and allocation utilities.

Part 2 — Additional functions (11): Substring creation, string joining and trimming, splitting, integer conversion, callback-based string operations, and output to file descriptors.

Part 3 — Linked lists (9): Creating, adding, counting, finding, iterating, mapping, and deleting linked-list nodes.

The function declarations and the t_list structure are in libft.h. The Makefile compiles all 43 functions into libft.a.

Instructions

Run these commands in the project directory:

make          # Build libft.a
make clean    # Remove object files
make fclean   # Remove object files and libft.a
make re       # Rebuild the library

To use Libft in another C program, include libft.h and link the library:

cc -Wall -Wextra -Werror main.c libft.a -o program

Resources

Libft subject, version 19.3: Requirements and expected function behavior.

C manual pages: man 3 strlen, man 3 malloc, man 3 free, man 3 memcpy.

cppreference — C language: https://www.cppreference.com/c/language

Beej's Guide to C Programming: https://beej.us/guide/bgc/

Jacob Sorber's YouTube channel (C and systems programming): https://www.youtube.com/@JacobSorber

AI usage

I used AI as a learning and development aid: to explain C concepts such as pointers, dynamic memory, strings, and linked lists; to find or suggest relevant YouTube videos and documentation; to review and revise some function implementations (including linked-list functions) and to create additional test scripts.

I checked the project locally using compiler warnings, Norminette, functional and edge-case tests.
