/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:25:45 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/11/05 19:38:16 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(char	*str);
void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(char	*str);
int		ft_isalpha(char	*str);
int		ft_isascii(char	*str);
int		ft_isdigit(char	*str);
int		ft_isprint(char	*str);
void	*ft_memccpy(void *restrict dest, const void *restrict src,
			int c, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *ptr, int x, size_t n);
char	*ft_strchr(char	*str, int c);
char	*ft_strdup(char *s1);
size_t	ft_strlcat(char	*dest, char	*src, size_t n);
size_t	ft_strlcpy(char	*dest, char	*src, size_t n);
int		ft_strlen(char	*str);
int		ft_strncmp(const char	*str1, const char	*str2, size_t	n);
char	*ft_strnstr(char	*s1, char	*s2, size_t	n);
char	*ft_strrchr(const char *str, int c);
char	*ft_tolower(char	*str);
char	*ft_toupper(char	*str);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif