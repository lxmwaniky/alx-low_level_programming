/**
 * _isalpha - checks if @c is lowercase or uppercase
 * @c: character
 * Return: 1 if its lowercase or upper, 0 if its neither
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
