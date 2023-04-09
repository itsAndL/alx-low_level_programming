/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c) {}

/**
 * _islower - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _islower(int c) {}

/**
 * _isalpha - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _isalpha(int c) {}

/**
 * _abs - main function
 *
 * @n: integer to make absolute
 * Return: int or int times negative
 *
 */
int _abs(int n) {}

/**
 * _isupper - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _isupper(int c) {}

/**
 * _isdigit - main function
 *
 * @c: character to compare
 *
 * Return: 1 if true, 0 if false
 *
 */
int _isdigit(int c) {}

/**
 * _strlen - gets character string
 *
 * @s: character to getstring
 * Return: returns length
 */
int _strlen(char *s) {}

/**
 * _puts - puts a string
 *
 * @str: string to print
 */
void _puts(char *s) {}

/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */
char *_strcpy(char *dest, char *src) {}

/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: src
 *
 * Return: a character value
 */
int _atoi(char *s) {}

/**
 * *_strcat -  concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src) {}

/**
 * _strncat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 *
 * Return: char value
 */
char *_strncat(char *dest, char *src, int n) {}

/**
 * _strncpy - copies a string
 * @dest: destination to copy
 * @src: source to copy
 * @n: amount of places to copy
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n) {}

/**
 * _strcmp - string to compare
 * @s1: first string
 * @s2: second string
 *
 * Return: value of string
 */
int _strcmp(char *s1, char *s2) {}

/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set it as
 * @n: n amount of times
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n) {}

/**
 * _memcpy - copies from source to dest values in array
 * @dest: destination to copy to
 * @src: source to copy from
 * @n: n amount of times
 * Return: return the string value
 */
char *_memcpy(char *dest, char *src, unsigned int n) {}

/**
 * _strchr - locates character in string
 * @s: string to locate char
 * @c: character to find
 * Return: character value
 */
char *_strchr(char *s, char c) {}

/**
 * _strspn - length of prefix substring
 * @s: string to go through
 * @accept: accepted bytes
 * Return: returns usigned values
 */
unsigned int _strspn(char *s, char *accept) {}

/**
 * _strpbrk - finds string
 * @s: string to find stuff
 * @accept: accepting arrays
 *
 * Return: returns new value
 */
char *_strpbrk(char *s, char *accept) {}

/**
 * _strstr - locates substring
 * @haystack: string to locte
 * @needle: substring to locate
 * Return: returns string at starting sub or null
 */
char *_strstr(char *haystack, char *needle) {}
