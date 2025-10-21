#include "newFile.h"

static char	*ft_num_value(int n, char *num, int last_ind)
{
	int	n_last;

	n_last = last_ind;
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	if (n == 0)
	{
		num[0] = '0';
		num[1] = '\0';
		return (num);
	}
	while (n != 0)
	{
		num[last_ind] = (n % 10) + '0';
		n /= 10;
		last_ind--;
	}
	num[n_last + 1] = '\0';
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		n_cpy;

	i = 0;
	n_cpy = n;
	if (n == -2147483648)
		return (strdup("-2147483648"));
	if (n < 0)
		n_cpy = -n;
	while (n_cpy != 0)
	{
		n_cpy /= 10;
		i++;
	}
	if (n <= 0)
		i++;
	num = (char *)malloc((i + 1) * sizeof(char));
	if (!num)
		return (NULL);
	return (ft_num_value(n, num, i - 1));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ptr;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	ptr = (char *)calloc(len_s1 + len_s2 + 1, sizeof(char));
	if (!ptr)
		return (0);
	strlcpy(ptr, s1, len_s1 + 1);
	strlcat(ptr, s2, len_s1 + len_s2 + 1);
	return (ptr);
}

char *ft_file(int j)
{
	int kalan;

	if((j / 100) > 0)
		return (printf("%d\n", (j%100)) ,ft_itoa(j));
	if ((j / 10) > 0)
		return (ft_strjoin("0", ft_itoa(j)));
	return (ft_strjoin("00", ft_itoa(j)));
}
