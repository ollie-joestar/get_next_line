/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oohnivch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:50:23 by oohnivch          #+#    #+#             */
/*   Updated: 2024/04/29 19:34:14 by oohnivch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 69
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(char const *s);
size_t	ft_nlcheck(char const *s);
char	*ft_buffjoin(char **s1, char **s2);
void	ft_free(char **something);
size_t	ft_linelen(char *buffer);
char	*ft_parseline(char **buffer);
char	*get_next_line(int fd);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);

#endif
