# ENUMERATION DATA TYPE IN C LANGUAGE:
- Enumeration data type consists of named integer constants as a list.
- It start with 0 (zero) by default and value is incremented by 1 for the sequential identifiers in the list.
- Enum syntax in C:
	- enum identifier [optional{ enumerator-list }];
- Enum example in C: 
```c
enum month { Jan, Feb, Mar }; or
/* Jan, Feb and Mar variables will be assigned to 0, 1 and 2 respectively by default */
enum month { Jan = 1, Feb, Mar };
/* Feb and Mar variables will be assigned to 2 and 3 respectively by default */
enum month { Jan = 20, Feb, Mar };
/* Jan is assigned to 20. Feb and Mar variables will be assigned to 21 and 22 respectively by default */
```
- The above enum functionality can also be implemented by “#define” preprocessor directive as given below. Above enum example is same as given below.
```c
#define Jan 20;
#define Feb 21;
#define Mar 22;
```
