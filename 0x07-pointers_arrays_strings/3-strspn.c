unsigned int _strspn(char *s, char *accept)
{

	i = l = 0;
	while (s[i] != 0)
	{
		j = 0;
		a = 0;
		while (accept[j] != 0)
		{
			if (s[i] != accept[j])
			{
				j++;
			}
			else if (s[i] == accept[j])
			{
				a++;
				l++;
				j++;
			}
		}
		if (a == 0)
			return (l);
		i++;
	}
	return (l);
}
