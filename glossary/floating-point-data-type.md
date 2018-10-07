# FLOATING POINT DATA TYPE
Floating point data type consists of 2 types:
- float
- double
1. **FLOAT:**
- Float data type allows a variable to store decimal values.
- Storage size of float data type is 4. This also varies depend upon the processor in the CPU as “int” data type.
- We can use up-to 6 digits after decimal using float data type.
- For example, 10.456789 can be stored in a variable using float data type.

2. **DOUBLE:**
- Double data type is also same as float data type which allows up-to 10 digits after decimal.
- The range for double datatype is from 1E–37 to 1E+37.
```c
float       //minimum range: +/- 1E-37..1E+37  minimum precision: 6 digits
double      //minimum range: +/- 1E-37..1E+37  minimum precision: 10 digits
long double //minimum range: +/- 1E-37..1E+37  minimum precision: 10 digits
```
With several compilers **double** and **long double** are equivalent. 
That combined with the fact that most standard mathematical functions work with type double, is a good reason to always use the type double if you have to work with fractional numbers.
