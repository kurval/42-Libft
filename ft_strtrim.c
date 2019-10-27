#include "libft.h"

static	char	*check_whitespaces(char *s1, char const  *s2)
{
	int i;
	int j;
	int k;


	i = 0;
	j = ft_strlen(s2) - 1;
	k = 0;
	while (s2[i] == ' ' || s2[i] == '\n' || s2[i] == '\t')
		i++;
	while (s2[j] == ' ' || s2[j] == '\n' || s2[j] == '\t')
		j--;
	while (i <= j)
		s1[k++] = s2[i++];
	s1[k] = '\0';
	return(s1);

}

char	*ft_strtrim(char const *s)
{
	int	i;
	char	*trim;

	i = 0;
	if (!(trim = (char*)malloc(sizeof(*trim) * ft_strlen(s) + 1)))
		return(NULL);
	check_whitespaces(trim, s);
	return(trim);
}
