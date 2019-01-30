# C Data Types 
**Overview**
- C data types are defined as the data storage format that a variable can store a data to perform a specific operation.
- Data types are used to define a variable before to use in a program.
- Size of a variable, constant and array are determined by data types.

## Four Data Types in C Language:
C supports the following **basic data types:**

- **`int`: integer, a whole number**
- **`char`: single character**
- **`float`: floating point, a number with a fractional part.**
- **`double`: double-precision floating point value.**

The amount of storage required for each of these varies by platform.
C has a build-in `sizeof` operator that outputs the memory requirements for a particular data type.

For example:

```c
int main() {
    printf("int: %d \n", sizeof(int));
    printf("float: %d \n", sizeof(float));
    printf("double: %d \n", sizeof(double));
    printf("char: %d \n", sizeof(char));

    return 0;
}
```
Output:

```c
int: 4 
float: 4 
double: 8 
char: 1 
```

#### Other Data Types:

- **Enumeration data type: `enum`
- **Derived data type: `pointer`, `array`, `structure`, `union`
- **Void data type: `void`

