char	*ft_strcpy(char *a, char *b)
{
	int	i = 0;
	while (a[i] != '\0')
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
