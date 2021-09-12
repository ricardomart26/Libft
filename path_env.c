#include "libft.h"

char	*get_env_path(char **envp)
{
	int	x;

	x = 0;
	while (envp[x])
	{
		if (ft_strncmp("PATH", envp[x], 4))
			return (envp[x] + 5);
		x++;
	}
	return (NULL);
}