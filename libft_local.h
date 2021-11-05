/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmokhtar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:21:58 by hmokhtar          #+#    #+#             */
/*   Updated: 2021/10/25 15:21:58 by hmokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct  s_list
{
    void            *content;
    struct  s_list  *next; 
}            t_list;

void    *ft_memset(void *ptr, int x, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memccpy(void *restrict dest, const void *restrict src, int c, size_t n);
void    *ft_bzero(void *s, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *str, int c, size_t n);
int    ft_memcmp(const void *s1, const void *s2, size_t n);

# endif