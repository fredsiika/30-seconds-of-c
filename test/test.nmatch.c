
					#include <stdio.h>
					#include <stdlib.h>
					#include <string.h>

					#define TEST(EXP, RES) printf(#EXP " (" #RES " vs %d) -> %d\n", (EXP), ((EXP)) == (RES))
					#define TEST_STR(EXP, RES) printf(#EXP " (" #RES " vs \"%s\") -> %d\n", (EXP), strcmp(((EXP)), (RES)) == 0)

					int		nmatch(char *s1, char *s2);
				
int main()
{
TEST(nmatch("asdf", "asdf"), 1);
TEST(nmatch("", ""), 1);
TEST(nmatch("a", "a"), 1);
TEST(nmatch("aa", "aa"), 1);
TEST(nmatch("aaa", "aaa"), 1);
TEST(nmatch("", "asdf"), 0);
TEST(nmatch("asdf", ""), 0);
TEST(nmatch("asdf", "a"), 0);
TEST(nmatch("a", "asdf"), 0);
TEST(nmatch("asdf", "asde"), 0);
TEST(nmatch("asde", "asdf"), 0);
TEST(nmatch("asdf", "asdff"), 0);
TEST(nmatch("asdff", "asdf"), 0);
TEST(nmatch("aasdf", "asdf"), 0);
TEST(nmatch("asdf", "aasdf"), 0);
TEST(nmatch("", "*"), 1);
TEST(nmatch("a", "*"), 1);
TEST(nmatch("aa", "*"), 1);
TEST(nmatch("asdf", "*"), 1);
TEST(nmatch("asdfasdf", "*"), 1);
TEST(nmatch("asdf", "a*"), 1);
TEST(nmatch("asdfasdf", "a*"), 1);
TEST(nmatch("a", "a*"), 1);
TEST(nmatch("aa", "a*"), 1);
TEST(nmatch("aasdf", "a*"), 1);
TEST(nmatch("", "a*"), 0);
TEST(nmatch("f", "a*"), 0);
TEST(nmatch("fdsa", "a*"), 0);
TEST(nmatch("faaaa", "a*"), 0);
TEST(nmatch("faaasdf", "a*"), 0);
TEST(nmatch("fdsa", "*a"), 1);
TEST(nmatch("a", "*a"), 1);
TEST(nmatch("aa", "*a"), 1);
TEST(nmatch("fdsaaaaaaafdsa", "*a"), 1);
TEST(nmatch("dfsaaaaaaaaaaaa", "*a"), 1);
TEST(nmatch("", "*a"), 0);
TEST(nmatch("f", "*a"), 0);
TEST(nmatch("asdf", "*a"), 0);
TEST(nmatch("aaaaaf", "*a"), 0);
TEST(nmatch("fdsaaaaf", "*a"), 0);
TEST(nmatch("abc", "abc*"), 1);
TEST(nmatch("abcdef", "abc*"), 1);
TEST(nmatch("abccccccc", "abc*"), 1);
TEST(nmatch("abcabc", "abc*"), 1);
TEST(nmatch("abcdabcdabc", "abc*"), 1);
TEST(nmatch("", "abc*"), 0);
TEST(nmatch("f", "abc*"), 0);
TEST(nmatch("abbc", "abc*"), 0);
TEST(nmatch("ab", "abc*"), 0);
TEST(nmatch("abb", "abc*"), 0);
// 50
TEST(nmatch("abc", "*abc"), 1);
TEST(nmatch("defabc", "*abc"), 1);
TEST(nmatch("aaaaaaabc", "*abc"), 1);
TEST(nmatch("abcabc", "*abc"), 1);
TEST(nmatch("abcdabcdabc", "*abc"), 1);
TEST(nmatch("", "*abc"), 0);
TEST(nmatch("f", "*abc"), 0);
TEST(nmatch("abbc", "*abc"), 0);
TEST(nmatch("ab", "*abc"), 0);
TEST(nmatch("abb", "*abc"), 0);
TEST(nmatch("a", "*a*"), 1);
TEST(nmatch("aaa", "*a*"), 3);
TEST(nmatch("aaabc", "*a*"), 3);
TEST(nmatch("bcabc", "*a*"), 1);
TEST(nmatch("sdfa", "*a*"), 1);
TEST(nmatch("", "*a*"), 0);
TEST(nmatch("f", "*a*"), 0);
TEST(nmatch("bcd", "*a*"), 0);
TEST(nmatch("bb", "*a*"), 0);
TEST(nmatch("ASDF", "*a*"), 0);
TEST(nmatch("ab", "*ab*"), 1);
TEST(nmatch("abcd", "*ab*"), 1);
TEST(nmatch("efabcd", "*ab*"), 1);
TEST(nmatch("ababab", "*ab*"), 3);
TEST(nmatch("bab", "*ab*"), 1);
TEST(nmatch("asdf", "*ab*"), 0);
TEST(nmatch("ba", "*ab*"), 0);
TEST(nmatch("", "*ab*"), 0);
TEST(nmatch("f", "*ab*"), 0);
TEST(nmatch("bbbbbbaaaaa", "*ab*"), 0);
TEST(nmatch("", "**"), 1);
TEST(nmatch("a", "**"), 2);
TEST(nmatch("ab", "**"), 3);
TEST(nmatch("abc", "**"), 4);
TEST(nmatch("abcd", "**"), 5);
TEST(nmatch("a", "a**"), 1);
TEST(nmatch("ab", "a**"), 2);
TEST(nmatch("abc", "a**"), 3);
TEST(nmatch("aaaa", "a**"), 4);
TEST(nmatch("asdfa", "a**"), 5);
TEST(nmatch("", "a**"), 0);
TEST(nmatch("f", "a**"), 0);
TEST(nmatch("fa", "a**"), 0);
TEST(nmatch("faaaaaaa", "a**"), 0);
TEST(nmatch("fafdsafdsa", "a**"), 0);
TEST(nmatch("asdf", "*a**"), 4);
TEST(nmatch("sdfa", "*a**"), 1);
TEST(nmatch("faffff", "*a**"), 5);
TEST(nmatch("fdsaasdf", "*a**"), 9);
TEST(nmatch("aaaaaaa", "*a**"), 28);
// 100
TEST(nmatch("", "*a**"), 0);
TEST(nmatch("qwerqwer", "*a**"), 0);
TEST(nmatch("bbbbbb", "*a**"), 0);
TEST(nmatch("c", "*a**"), 0);
TEST(nmatch("AAAAAAAAAA", "*a**"), 0);
TEST(nmatch("main.c", "*.c"), 1);
TEST(nmatch("main.c.c", "*.c"), 1);
TEST(nmatch("main.h", "*.c"), 0);
TEST(nmatch("main.cc", "*.c"), 0);
TEST(nmatch("main.c", "*.*"), 1);
TEST(nmatch("test.main.c", "test.*.c"), 1);
TEST(nmatch("test..c", "test.*.c"), 1);
TEST(nmatch("test.main.h", "test.*.c"), 0);
TEST(nmatch("main.c", "test.*.c"), 0);
TEST(nmatch("test.c", "test.*.c"), 0);
TEST(nmatch("abcde", "a*c*e"), 1);
TEST(nmatch("abcde", "*b*d*"), 1);
TEST(nmatch("abcde", "a*e*c"), 0);
TEST(nmatch("abcde", "*d*c*"), 0);
TEST(nmatch("abcde", "a*d*d"), 0);
TEST(nmatch("abcbd", "*b*"), 2);
TEST(nmatch("abc", "a**"), 3);
TEST(nmatch("test.asdf.c.bak", "*.*.*"), 3);
TEST(nmatch("test.bak", "*.*.*"), 0);
TEST(nmatch("", "************************"), 1);
TEST(nmatch("*a", "*"), 1);
TEST(nmatch("**", "*"), 1);
TEST(nmatch("*ab", "*b"), 1);
TEST(nmatch("a*a", "a*"), 1);
TEST(nmatch("**a", "*a"), 1);



return 0;
}
