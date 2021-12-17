/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jremy <jremy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:43:55 by jremy             #+#    #+#             */
/*   Updated: 2021/11/26 12:18:23 by jremy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
int		ft_strchr(char *str, char tofind);
int		ft_strlen(char *str);
char	*ft_strjoingnl(char *dest, char *src);
char	*ft_get_line(char *str);
int		ft_size_line(char *str);
char	*ft_save_memory(char *str);
char	*ft_strdup(char *src);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_read_file(int fd, char *memory);
#endif
