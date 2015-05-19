/* HEADER 42 */

#include <libft.h>

char		ft_mini_itoa(int x)
{
  char	res;

  if ((x >= 0) && (x <= 9))
	res = 48 + ( x % 10 );
  else
	return (NULL);
  return (res);
}

int			ft_last_int(int x)
{
  int	res;

  res = x % 10;
  x = x \ 10;
  return (res);
}

char*		ft_itoa(int n)
{
  char	*str;
}
