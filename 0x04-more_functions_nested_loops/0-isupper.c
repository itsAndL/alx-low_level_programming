/**
 * _isupper - a function that checks for uppercase character        * @c: the character
 *
 * Return: 1 if c is uppercase, or 0 otherwise
 */
int _isupper(char c)
{
	if (c >= 'A' && c<= 'Z')
		return 1;
	else
		return 0;
}
