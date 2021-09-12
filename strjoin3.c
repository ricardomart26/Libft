#include "libft.h"

char	*ft_str3join(char *s1, char *s2, char *s3)
{
	char	*str;
	int		sizetotal;

	if (!s1 || !s2 || !s3)
		return (NULL);
	sizetotal = ft_strlen(s1) + ft_strlen(s2) + ft_strlen(s3);
	str = (char *)malloc(sizetotal + 1);
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	while (*s3)
		*str++ = *s3++;
	*str = '\0';
	return (str - sizetotal);
}
