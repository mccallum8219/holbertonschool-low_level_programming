Create the dynamic library libdynamic.so containing all the functions listed below:

int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory

Write a blog post describing the differences between static and dynamic libraries.

Blog General Requirements:

Title makes sense
At least one picture at the top of the blog
Blog is published on Medium or LinkedIn
Blog is shared on LinkedIn
Blog Content Requirements:

Why and when libraries should be used
How to create a static library (in Linux)
How to use a static library to create a program (in Linux)
How to create a dynamic library (in Linux)
How to use a dynamic library to create a program (in Linux)
What are the differences between static and shared libraries
What is the environmental variable $LD_LIBRARY_PATH and how do you use it
Mentions the following
gcc and it’s options -L and -l
nm
ldd
ldconfig
ar
ranlib
When done, please add all urls below (blog post, LinkedIn post, etc.)

Please, remember that these blogs must be written in English to further your technical ability in a variety of settings