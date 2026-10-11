# Libft

Libft is a foundational project from the 42 curriculum. It consists of reimplementing a carefully selected set of standard C library functions from scratch, with a focus on low-level memory management, pointer arithmetic, string manipulation, and clean, reusable code.

The resulting `libft.a` static library is designed to be reused in future C projects throughout the 42 cursus.

## Features

The library provides implementations for:

- Character classification and conversion
- Memory manipulation and comparison
- String manipulation and searching
- Integer and string conversion
- Dynamic memory allocation
- File-descriptor output
- Singly linked-list management

## Function Categories

### Character Functions

- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_toupper`
- `ft_tolower`

### Memory Functions

- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_calloc`
- `ft_strdup`

### String Functions

- `ft_strlen`
- `ft_strlcpy`
- `ft_strlcat`
- `ft_strchr`
- `ft_strrchr`
- `ft_strncmp`
- `ft_strnstr`
- `ft_substr`
- `ft_strjoin`
- `ft_strtrim`
- `ft_split`
- `ft_strmapi`
- `ft_striteri`

### Conversion Functions

- `ft_atoi`
- `ft_itoa`

### File-Descriptor Functions

- `ft_putchar_fd`
- `ft_putstr_fd`
- `ft_putendl_fd`
- `ft_putnbr_fd`

### Bonus Linked-List Functions

- `ft_lstnew`
- `ft_lstadd_front`
- `ft_lstsize`
- `ft_lstlast`
- `ft_lstadd_back`
- `ft_lstdelone`
- `ft_lstclear`
- `ft_lstiter`
- `ft_lstmap`

## Project Structure

```text
.
├── README.md
├── Subject/
│   └── en.subject.pdf
└── src/
    ├── Makefile
    ├── libft.h
    ├── ft_*.c
    └── ft_*_bonus.c
```

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

Build the bonus linked-list functions:

```bash
make bonus
```

## Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles the mandatory functions and creates `libft.a` |
| `make bonus` | Compiles and adds the bonus linked-list functions |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Rebuilds the project from scratch |

## Usage

Include the library header in your C program:

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

Compile and link the program from the `src` directory:

```bash
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o program
```

Run it with:

```bash
./program
```

## Learning Objectives

This project reinforces the following programming concepts:

- Pointer arithmetic and low-level memory access
- Dynamic memory allocation and deallocation
- Null-terminated string handling
- Function pointers and callbacks
- Linked-list data structures
- Error handling and allocation-failure cleanup
- Static library creation and linking
- Writing maintainable and reusable C code

## 42 School Standards

The project is developed according to the strict coding standards of the 42 curriculum, emphasizing readability, consistency, correctness, and responsible memory management.

## Author

**A-chem**

42 Network student — C programming and systems development.
