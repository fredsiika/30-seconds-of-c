# Pointer in C Language
- Pointers in C language is a variable that stores/points the address of another variable. 
- A Pointer in C is used to allocate memory dynamically (i.e. at run time). 
- The pointer variable might be belonging to any of the data type such as:
	 int, float, char, double, short etc.

Pointer Syntax : 
```c
data_type *var_name; 
```
Example : 
```c
int *p;  char *p;
```
Where, * is used to denote that “p” is pointer variable and not a normal variable.

## Key Points to remember about pointers in C (pun intended):
- Normal **variable stores the value** whereas **pointer variable stores the address** of the variable.
- The content of the C pointer is always goint to be a whole number (i.e. address).
- C pointers is always initialized to null 
For example:
```c
 int *p = NULL
 	and/or

 int *p = '\0'
```
- The value of a null pointer is 0.
- The ampersand symbol '&' is used to get the address of the variable.
```c
void ft_putstr(char *str)
{
	while(*str !='\0')
		write(1, &str, 1);
	str++;
}
```
or...
```c
int ft_putchar(char c)
{
	write(1, &c, 1);
}
```
- The asterisk symbol'*' is used to get the value of the variable that the pointer is pointing to.
- If a pointer in C is assigned to NULL ('\0'), it means it is pointing to nothing.
- Two pointers can be subtracted to find out how many elements are available between these two pointers

**However...**
- Pointer addition, multiplication, division are not allowed.
- The size of any pointer is 2 bytes (for a 16-bit compiler).
