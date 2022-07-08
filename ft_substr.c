/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayoon <jayoon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 23:12:48 by jayoon            #+#    #+#             */
/*   Updated: 2022/07/08 18:50:04 by jayoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static char	*allocate_str_by_length(size_t s_len, size_t len)
{
	char	*str;

	if (s_len < len)
		str = (char *)malloc(sizeof(char) * (s_len + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	return (str);
}

static void	copy_s_to_ret(char *dst, char *src, size_t len, t_len *pu)
{

}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;
	t_len	utils;

	if (!s)
		return (NULL);
	utils.i = 0;
	utils.s_len = ft_strlen(s);
	ret = allocate_str_by_length(utils.s_len, len);
	copy_s_to_ret(ret, s, len, &utils);
	if (start < utils.s_len)
	{
		while (i < len)
		{
			if (s[i] == '\0')
				break ;
			ret[i] = s[start + i];
			i++;
		}
	}
	ret[i] = '\0';
	return (ret);
}
