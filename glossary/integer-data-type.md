# Integer Data Type
- Integer data type allows a variable to store numeric values
- "int" keyword is used to refer to the integer data type
- The storage size of an int data type is 2 or 4 or 8 bytes
- For 16-bit processor, 2 bytes (16 bit) of memory is allocated for int data type
- For 32-bit processor, 4 bytes of memory is allocated
- For 64-bit processor, 8 bytes of memory is allocated for int data type

**Storage values for integer data types**
- int (2 byte) can store values from -32,768 to +32,767
- int (4 byte) can stor values from -2,147,483,648 to +2,147,483,647
- For integer values that cross the above limit, use "long int" and "long long int" for which the limits are very high

Integer types: (non-fractional numbers)
```c
signed char		 minimum range: -127..+127
unsigned char	 minimum range: 0..255
signed short	 minimum range: -32767..+32767
unsigned short 	minimum range: 0..65535
signed int    	minimum range: -32767..+32767
unsigned int  	minimum range: 0..65535
signed long    	minimum range: -2147483647..+2147483647
unsigned long  	minimum range: 0..4294967295
```
A couple of things to note:
- The type **char** may be equivalent to either a **signed char** or **unsigned char** (this depends on your compiler), but it is always a separate type from either of these.
- Notice that there is no difference between storing characters or their corresponding numerical values in a variable, this means that there is no need for a function to convert between a character and its numerical value or vice-versa (this is different from languages like Pascal or BASIC).

As for the other integer types...
- If you omit **signed** or **unsigned** the default will be **signed** (i.e. **int** and **signed int** are equivalent).
- The type **int** must be >= (greater than or equal to) the type **short**, and smaller than or equal to the type **long** (depending on your compiler and operating system).
- It's a good idea to use the type **int** if you simply need to store some values which are not ridiculously large.
- A good rule of thumb is to stick to the size that your processor can deal with the easiestand fastest.
- In the next section we cover a larger type '**long long**'. Before resorting to the '**long long**' type, you may want to use the floating-point type first.
