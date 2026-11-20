*This project has been created as part of the 42 curriculum by msantiag.*

## Description

Libft is the first 42 Common Core project. The goal is to create a C
library with functions I can reuse in future projects. It
contains 43 functions divided into three groups: libc functions,
additional functions and linked list functions. The result is compiled
into a static library, `libft.a`.

### Libc functions

- `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`: check if a
  character belongs to a certain group. They do not modify anything,
  they only return true or false.
- `toupper`, `tolower`: convert a letter to upper or lower case and
  return the result.
- `strlen`, `strchr`, `strrchr`, `strncmp`, `strnstr`: read a string
  without modifying it with multiple purposes .
- `strlcpy`, `strlcat`: copy and concatenate strings, writing into a
  destination buffer with a limited size.
- `memset`, `bzero`, `memcpy`, `memmove`: write into a block of
memory,
  filling it or copying bytes from another block.
- `memchr`, `memcmp`: read a block of memory without modifying it with multiple purposes.
- `atoi`: converts a string into an integer.
- `calloc`, `strdup`: allocate new memory with `malloc`, an array
  initialized to zero or a copy of a string.

### Additional functions

- `ft_substr`, `ft_strjoin`, `ft_strtrim`: create a new string using another or multiple strings, the originals are not modified.
- `ft_split`: splits a string by a delimiter and creates a new array of
  strings.
- `ft_itoa`: converts an integer into a new string.
- `ft_strmapi`, `ft_striteri`: apply a function to each character of a
  string.
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`:
  write a character, a string, a string with a newline or a number to a
  file descriptor.

### Linked list functions

The functions work with the `t_list` structure: a node with a `content`
and a pointer to the next node.

- `ft_lstnew`: creates a new node.
- `ft_lstadd_front`, `ft_lstadd_back`: add a node to the beginning or to
  the end of a list, modifying the list.
- `ft_lstsize`, `ft_lstlast`: read a list without modifying it, to get
  its size or its last node.
- `ft_lstdelone`, `ft_lstclear`: delete one node, or a node and all the
  ones after it, freeing the content and the node.
- `ft_lstiter`: applies a function to the content of every node.
- `ft_lstmap`: creates a new list with the result of applying a
  function to each node of an existing one.

## Instructions

### Requirements

A C compiler (`cc`), `make` and `ar`. No installation is needed: the
project produces a static library that is linked into other programs.

### Compilation

```bash
make          # builds libft.a
make clean    # removes the object files
make fclean   # removes the object files and libft.a
make re       # fclean followed by a new build
```

The files are compiled with `cc -Wall -Wextra -Werror`.

## Resources

### References

- Manual pages for the existing functions.
- My colleagues.

### Use of AI

AI (Claude) was used as a study and review tool:

- **Learning concepts.**
- **Reviewing and testing my code.**