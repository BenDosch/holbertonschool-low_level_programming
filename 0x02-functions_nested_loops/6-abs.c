/**
 * _abs - computes the absolue value of an integer
 * @i: integer passed to _abs
 * Return: int
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = (i * -1);
		return (i);
	}
	else
		return (i);
}
