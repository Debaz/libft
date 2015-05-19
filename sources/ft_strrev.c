/* HEADER 42 */

#include <libft.h>

char	*ft_strrev(char *s)
{
  int	i;
  char	c;

  c = '0';
  i = 0;
  while (i <= ((int)ft_strlen(s) / 2))
	{
	  c = s[i];
	  s[i] = s[ft_strlen(s) - (i + 1)];
	  s[ft_strlen(s) - (i + 1)] = c;
	  i++;
	}
  return (s);
}
