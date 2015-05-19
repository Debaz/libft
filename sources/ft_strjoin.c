/* HEADER 42 */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
  char *str;
  int	i;

  i = 0;
  str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
  while (i <= (int)ft_strlen(s1))
	{
	  str[i] = s1[i];
	  i++;
	}
  i = 0;
  while (i <= (int)ft_strlen(s2))
	{
	  str[ft_strlen(s1) + i] = s2[i];
	  i++;
	}
  str[ft_strlen(s1) + i] = '\0';
  return (str);
}
