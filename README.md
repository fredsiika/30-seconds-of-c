![30-Seconds-of-C-Logo](/logo.svg)
# 30 Seconds of C

[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-brightgreen.svg?style=flat-square)](http://makeapullrequest.com)![Awesome](https://cdn.rawgit.com/sindresorhus/awesome/d7305f38d29fed78fa85652e3a63e154dd8e8829/media/badge.svg)![License](https://img.shields.io/badge/license-CC0--1.0-blue.svg)

<br>🔌Your plug to a curated collection of useful **C Programming** tutorials, snippets, and projects that you can understand in 30 seconds or less.

---
<br>**P.S: This repository is a work in progress**

### Getting Started
- Use <kbd>Ctrl</kbd> + <kbd>F</kbd> or <kbd>command</kbd> + <kbd>F</kbd> to search for a snippet.
- Contributions welcome, please read the [contribution guide](./CONTRIBUTING.md).

**Motivation for this project** 
The core goal of **30 seconds of C** is to provide a public record of my journey to learn c programming. It's my goal to provide a quality resource for both beginners and advanced c progammers/developers. My initial motivation for creating this repository was to use it as a tool to document my journey at the [42 Silicon Valley](https://www.42.us.org/) - an engineering and programming. The contents of this repo are designed to help you write real time C programs on your own. 


## [Table of Contents](https://github.com/fredsiika/30-seconds-of-c/edit/master/README.md#table-of-contents)
### 📃[Basic Data Types](https://github.com/fredsiika/30-seconds-of-c/blob/master/glossary/c-data-types.md)
<summary>View contents</summary>

**Integer**<br>
- <kbd>[int](https://github.com/fredsiika/30-seconds-of-c/blob/master/glossary/integer-data-type.md)</kbd>

**Character**<br>
- <kbd>char</kbd>

**[Floating Point](https://github.com/fredsiika/30-seconds-of-c/blob/master/glossary/floating-point-data-type.md)**<br>
- <kbd>float</kbd><br> 
- <kbd>Double</kbd>

### ➗[Enumeration Data Type](https://github.com/fredsiika/30-seconds-of-c/blob/master/glossary/enumeration-data-type.md)
<summary>View contents</summary>

- <kbd>[enum](https://github.com/fredsiika/30-seconds-of-c/blob/master/glossary/enumeration-data-type.md)</kbd>

### 📚[Derived Data Type](https://github.com/fredsiika/30-seconds-of-c/blob/master/glossary/derived-data-type.md)
<summary>View contents</summary>

- <kbd>[pointer](https://github.com/fredsiika/30-seconds-of-c/blob/master/glossary/pointers.md)</kbd>
- <kbd>[array](https://github.com/fredsiika/30-seconds-of-c/blob/master/glossary/array.md)</kbd>
- <kbd>structure</kbd>
- <kbd>union</kbd>

### 🎛️[Void Data Type](https://github.com/fredsiika/30-seconds-of-c/blob/master/glossary/void-data-type.md)
<summary>View contents</summary>

- <kbd>[void](https://github.com/fredsiika/30-seconds-of-c/blob/master/glossary/void-data-type.md)</kbd>

---
## [Exam Shell](https://github.com/fredsiika/30-seconds-of-c/tree/master/examshell)
**Purpose:**
This repo provides useful tips to understand how to achieve 100% at 42 Silicon Valley exams.
A great developer like you 😎, however, should not just memorize the answers.

---
### [aff_a](https://github.com/fredsiika/30-seconds-of-c/blob/master/examshell/00-aff_a/)<br>

Create a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.

```c 
$> ./aff_a "abc" | cat -e
a$
$> ./aff_a "dubO a POIL" | cat -e
a$
$> ./aff_a "zz sent le poney" | cat -e
$
$> ./aff_a | cat -e
a$
```

<details>
  <summary>Answer</summary>
    
```c
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "a", 1);
	else
	{
		while (*argv[1])
			if (*argv[1] == 'a')
			{
				write(1, "a", 1);
				argv[1]++;
				break;
			}
	}
	write(1, "\n", 1);
	return (0);
}
```

</details>

<br>[⬆ Back to top](#table-of-contents)

### [ft_countdown](https://github.com/fredsiika/30-seconds-of-c/tree/master/examshell/00-ft_countdown)<br>

Write a program that displays all digits in descending order, followed by a
newline.

```c
$> ./ft_countdown | cat -e
9876543210$
$>
```

<details>
	<summary>Answer</summary>

```c
#include <unistd.h>

int	main(void)
{
	char c;
	c = '9';
	while (c >= '0')
	{
		write(1, &c, 1);
		c--;
	}
	write(1, "\n", 1);
	return (0);
}
```

</details>

<br>[⬆ Back to top](#table-of-contents)

### [ft_print_numbers](https://github.com/fredsiika/30-seconds-of-c/tree/master/examshell/00-ft_print_numbers)<br>

Write a function that displays all digits in ascending order.

Your function must be declared as follows:

<code>void	ft_print_numbers(void);</code>

<details>
	<summary>Answer</summary>

```c
#include <unistd.h>

int	main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c,1);
		c++;
	}
	write(1, "\n", 1);
	return (0);
}
```

</details>

<br>[⬆ Back to top](#table-of-contents)

### Additional Learning Resources
If you are new to C Programming, try taking a look at some of these references.

#### Books
---
- ANSI 89 – American National Standards Institute, American National Standard for Information Systems Programming Language C, 1989.
- Kernighan 78 – B. W. Kernighan and D. M. Ritchie, The C Programming Language, Prentice-Hall: Englewood Cliffs, NJ, 1978. Second edition, 1988.
- Thinking 90 – C* Programming Guide, Thinking Machines Corp. Cambridge Mass., 1990.
- [Head First C - A complete learning experience for C and structured imperative programming.](http://www.allitebooks.com/head-first-c/)
#### Websites
---
- [GeeksforGeeks - A computer science portal for geeks.](https://www.geeksforgeeks.org/c-programming-language/)
- [SoloLearn - C Tutorial](https://www.sololearn.com/Course/C/)
- [C Programming Google+ Community](https://plus.google.com/u/0/communities/103796658293092790651)

#### Online Integrated Development Environments (IDEs)
- [C Tutor - Visualize C code execution to learn C online](http://www.pythontutor.com/c.html#mode=edit)
- [Ideone - An nline compiler and debugging tool](https://ideone.com/)
- [SoloLearn - Code Playground](https://code.sololearn.com/#c)

## Inspiration for this project
The idea behind 30 Seconds of C was inspired some people who created similar collections in other programming languages and environments. Here are the ones we like the most:
- [30 Seconds of Code](https://github.com/Chalarangelo/30-seconds-of-code) by **charlarangelo**
- [30 Seconds of CSS](https://atomiks.github.io/30-seconds-of-css) by **atomiks**
- [30 Seconds of Python](https://github.com/kriadmin/30-seconds-of-python-code) by **kriadmin**
- [30 Seconds of Interviews](https://30secondsofinterviews.org) by **fejes713**

## How to Contribute
Do you have a cool idea for a new snippet, or want to add your own tips? Checkout [contributing.md](./CONTRIBUTING.md).

## Collaborators
[<img src="https://github.com/fredsiika.png" width="100px;"/>](https://github.com/fredsiika)<br/>[<sub>Fred Siika</sub>](https://github.com/fredsiika)<br> [<img src="https://github.com/gracenellore.png" width="100px;"/>](https://github.com/gracenellore)<br/>[<sub>Grace Nelore</sub>](https://github.com/gracenellore)

## Credits
*Icon made by [Smashicons](https://www.flaticon.com/authors/smashicons) from [www.flaticon.com](https://www.flaticon.com/) is licensed by [CC 3.0 BY](http://creativecommons.org/licenses/by/3.0/).*
<br>This site was built using [GitHub Pages](https://pages.github.com/).

<br>[⬆ Back to top](#table-of-contents)
