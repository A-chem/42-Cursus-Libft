# Libft

Libft is a foundational C project from the 42 curriculum. The purpose of this project is to recreate a practical subset of the standard C library from scratch, without relying on the original implementations.

The project focuses on understanding how low-level functions work internally and on developing strong skills in memory management, pointer arithmetic, string processing, dynamic allocation, linked lists, and modular compilation.

The result is a reusable static library named `libft.a`, which can be linked with future C projects.

## Project Goals

Libft is designed to help develop the ability to:

- Work safely with pointers and raw memory
- Understand how strings are represented in C
- Allocate, initialize, and release dynamic memory
- Handle edge cases and allocation failures
- Use function pointers and callbacks
- Implement and manipulate linked lists
- Create and link a static library
- Write clean, reusable, and maintainable C code

## Architecture

The project follows a simple static-library architecture:

```text
                    ┌──────────────────────┐
                    │      User program    │
                    │       main.c         │
                    └──────────┬───────────┘
                               │
                               │ #include "libft.h"
                               │ link with -lft
                               ▼
                    ┌──────────────────────┐
                    │       libft.a        │
                    │   Static library     │
                    └──────────┬───────────┘
                               │
       ┌───────────────────────┼───────────────────────┐
       ▼                       ▼                       ▼
┌───────────────┐      ┌───────────────┐      ┌───────────────┐
│ Character and │      │ Memory and    │      │ String and    │
│ conversion    │      │ allocation    │      │ conversion    │
│ functions     │      │ functions     │      │ functions     │
└───────────────┘      └───────────────┘      └───────────────┘
                               │
                               ▼
                    ┌──────────────────────┐
                    │ Bonus linked lists   │
                    │ t_list operations    │
                    └──────────────────────┘
```

### Build flow

1. Each `.c` file is compiled into an object file `.o`.
2. The object files are archived by `ar` into `libft.a`.
3. A user program includes `libft.h`.
4. The linker connects the program with `libft.a`.
5. The program can call any function exposed by the library.

### Responsibility of each file

- `src/libft.h`: public API, function prototypes, required headers, and the `t_list` structure.
- `src/*.c`: individual implementations of the library functions.
- `src/Makefile`: compilation, archiving, cleaning, and bonus targets.
- `Subject/en.subject.pdf`: official project subject.

## Project Structure

```text
.
├── README.md
├── Subject/
│   └── en.subject.pdf
└── src/
    ├── Makefile
    ├── libft.h
    ├── ft_is*.c
    ├── ft_mem*.c
    ├── ft_str*.c
    ├── ft_atoi.c
    ├── ft_itoa.c
    ├── ft_put*.c
    └── ft_lst*_bonus.c
```

## Complete Function Reference

### Character Classification and Conversion

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an uppercase or lowercase letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit from `0` to `9`. |
| `ft_isalnum` | Checks whether a character is alphabetic or numeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII range from `0` to `127`. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

These functions are useful when validating input and processing characters without using the standard `<ctype.h>` implementations.

### Memory Manipulation

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a specific byte value. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies a block of memory from a source address to a destination address. |
| `ft_memmove` | Copies memory safely when source and destination regions overlap. |
| `ft_memchr` | Searches for the first occurrence of a byte in a memory block. |
| `ft_memcmp` | Compares two memory blocks byte by byte. |
| `ft_calloc` | Allocates memory for multiple elements and initializes it to zero. |
| `ft_strdup` | Allocates memory and creates a duplicate of a string. |

These functions demonstrate pointer casting, byte-level access, buffer boundaries, and safe dynamic allocation.

### String Measurement and Searching

| Function | Description |
|---|---|
| `ft_strlen` | Returns the length of a null-terminated string. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares up to `n` characters from two strings. |
| `ft_strnstr` | Searches for a substring inside another string with a maximum length. |
| `ft_strlcpy` | Copies a string into a destination buffer with size awareness. |
| `ft_strlcat` | Appends a string to a destination buffer with size awareness. |

These functions rely on the C string convention: a string is an array of characters terminated by `\\0`.

### String Creation and Transformation

| Function | Description |
|---|---|
| `ft_substr` | Creates a newly allocated substring starting at a specified index. |
| `ft_strjoin` | Allocates and returns the concatenation of two strings. |
| `ft_strtrim` | Removes characters from the beginning and end of a string. |
| `ft_split` | Splits a string into a null-terminated array of strings using a delimiter. |
| `ft_strmapi` | Creates a new string by applying a callback to every character. |
| `ft_striteri` | Applies a callback to every character of an existing string. |

These functions demonstrate ownership of allocated memory, helper functions, cleanup on failure, and function pointers.

### Number Conversion

| Function | Description |
|---|---|
| `ft_atoi` | Converts the numeric part of a string into an integer. |
| `ft_itoa` | Converts an integer into a newly allocated null-terminated string. |

Important edge cases include whitespace, optional signs, zero, negative numbers, and the limits of the `int` type.

### File-Descriptor Output

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes one character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

A file descriptor identifies an input or output stream. Common descriptors are:

- `0`: standard input
- `1`: standard output
- `2`: standard error

Example:

```c
ft_putendl_fd("Hello, Libft!", 1);
```

### Bonus Linked-List Functions

The bonus part uses the following structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
} t_list;
```

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and initializes a new list node. |
| `ft_lstadd_front` | Inserts a node at the beginning of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Appends a node to the end of a list. |
| `ft_lstdelone` | Deletes one node and frees its content with a callback. |
| `ft_lstclear` | Deletes every node in a list and sets the list pointer to `NULL`. |
| `ft_lstiter` | Applies a callback to the content of every node. |
| `ft_lstmap` | Creates a new list by transforming every node's content. |

The list stores content as `void *`, which makes it generic: the same list implementation can store strings, integers, structures, or any other data type.

## Key C Concepts

### Pointers

Pointers store memory addresses. Libft uses them to read, write, copy, and compare memory directly.

```c
char *ptr;
ptr = buffer;
```

Pointer arithmetic allows the implementation to move through arrays and strings one element at a time.

### `void *` and generic memory

Functions such as `ft_memcpy`, `ft_memset`, and the linked-list functions use `void *` so they can work with different data types. The data is cast to an appropriate pointer type before it is accessed.

### Dynamic memory

Functions such as `ft_calloc`, `ft_strdup`, `ft_substr`, `ft_strjoin`, and `ft_split` allocate memory with `malloc`. Every successful allocation must eventually be released with `free`.

A good allocation pattern is:

```c
ptr = malloc(size);
if (!ptr)
    return (NULL);
```

### Null-terminated strings

C strings do not store their length automatically. They end with the null character `\\0`. Functions must stop reading when they reach this terminator and must reserve space for it when allocating a new string.

### Function pointers

`ft_strmapi`, `ft_striteri`, `ft_lstiter`, and `ft_lstmap` accept functions as arguments. This allows the caller to customize the operation while Libft manages the iteration.

Example callback type:

```c
char (*f)(unsigned int, char)
```

### Error handling

Allocation can fail. Functions that allocate memory return `NULL` when they cannot complete successfully. More complex functions, such as `ft_split` and `ft_lstmap`, must also free all previously allocated data before returning an error.

### Integer overflow

When calculating allocation sizes, multiplication can overflow. For example, `count * size` must be checked before calling `malloc`; otherwise, the program may allocate less memory than required.

### Static libraries

A static library is an archive of object files. In this project, `ar rcs` combines the compiled object files into `libft.a`. The library is copied into the final executable during linking.

## Compilation

The project uses `cc` with strict compiler flags:

```text
-Wall -Wextra -Werror
```

Build the mandatory library:

```bash
cd src
make
```

Build and add the bonus linked-list functions:

```bash
make bonus
```

## Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles mandatory functions and creates `libft.a`. |
| `make bonus` | Compiles and adds the bonus linked-list functions. |
| `make clean` | Removes object files. |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Performs a full rebuild. |

## Usage

Create a program such as `main.c` inside the `src` directory:

```c
#include "libft.h"

int main(void)
{
    char *message;

    message = ft_strdup("Hello, Libft!");
    if (!message)
        return (1);

    ft_putendl_fd(message, 1);
    free(message);
    return (0);
}
```

Compile and link it with the library:

```bash
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o program
```

Run the executable:

```bash
./program
```

Compiler options:

- `-I.` searches the current directory for `libft.h`.
- `-L.` searches the current directory for `libft.a`.
- `-lft` links the Libft static library.
- `-o program` names the output executable.

## Quality and Standards

The project follows the strict standards of the 42 curriculum, with an emphasis on:

- Correct behavior and edge-case handling
- Clean and readable C code
- Responsible memory management
- Small, focused functions
- Reusable helper logic
- Compilation without warnings

## Author

**A-chem**  
42 Network student — C programming and systems development.
