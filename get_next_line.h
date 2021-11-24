/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagat <snagat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:33:42 by snagat            #+#    #+#             */
/*   Updated: 2021/11/24 21:50:01 by snagat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_strjoin(char **s1, char *s2);
char	*ft_substr(char *s, int start, int len);
int		ft_strchr(char *str, int c);
int		ft_strlen(char *str);
char	*ft_strdup(char *s1);
char	*get_next_line(int fd);

#endif