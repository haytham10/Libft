#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static void		ft_free_if_error(int nbr, char **res)
{
	while (nbr >= 0)
	{
		if (res[nbr] != NULL)
			free(res[nbr]);
		nbr--;
	}
	free(res);
}

static int		ft_nbr_words(char const *s, char c)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] < 32 || s[i] > 126)
			return (0);
		else
		{
			nbr++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nbr);
}

static int		ft_allocate_words(char const *s, char **res, char c)
{
	int i;
	int nbr;
	int size;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			size = 0;
			while (s[i] && s[i++] != c)
				size++;
			res[nbr] = NULL;
			if (!(res[nbr] = (char*)malloc(sizeof(*s) * size + 1)))
			{
				ft_free_if_error(nbr, res);
				return (0);
			}
			nbr++;
		}
	}
	return (1);
}

static void		ft_fill_res(char const *s, char **res, char c)
{
	int i;
	int nbr;
	int size;

	i = 0;
	nbr = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			size = 0;
			while (s[i] && s[i] != c)
			{
				res[nbr][size] = s[i];
				size++;
				i++;
			}
			res[nbr][size] = '\0';
			nbr++;
		}
	}
}

char			**ft_split(char const *s, char c)
{
	int		words;
	char	**res;

	if (s == NULL || c == '\0')
	{
		if (!(res = (char**)malloc(sizeof(char*))))
			return (0);
		res[0] = 0;
		return (res);
	}
	words = ft_nbr_words(s, c);
	if (!(res = (char**)malloc(sizeof(char*) * words + 1)))
		return (0);
	ft_allocate_words(s, res, c);
	ft_fill_res(s, res, c);
	res[words] = 0;
	return (res);
}