#ifndef STRING_H
# define STRING_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>

char	*ft_strjoin3(const char *s1, const char *s2, const char *s3);
char	*ft_find_word_sp(char *str, char *word, bool debug);
char	*ft_find_word(char *str, char *word, bool debug);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(const char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);
int		ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strnstr(const char *haystack, const char *needle,
			size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strndup(const char *s1, int len);
char	*ft_strdup_and_free(char **s1);
char	*ft_str3join(const char *s1, const char *s2, const char *s3);
int		ft_strlen_range(const char *str, size_t st, size_t end);
int		ft_strlen_c(const char *str, char c);
char	*ft_strdup_range(const char *s1, int st, int end);
int		ft_strlen_dp(const char	**s1);
char	**ft_strdup_dp(const char **s1);
char	*ft_eraser(char *str, char *set, bool free);
bool	find_c_in_str(int c, char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
