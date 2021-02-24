char	*ft_strncpy(char *dest,char *src, unsigned int n
{
	char *ret;

	ret = dest;
	while(count)
	{
		if((*ret = *src) != 0)
			src++;
		ret++;
		n--;
	}
	retutn (dest);
}
