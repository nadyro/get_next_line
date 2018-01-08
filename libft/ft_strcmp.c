/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsehnoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 23:06:07 by nsehnoun          #+#    #+#             */
/*   Updated: 2017/04/13 05:36:28 by nsehnoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *str1, const char *str2)
{
	unsigned char	uc_str1;
	unsigned char	uc_str2;
	int				i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	uc_str1 = str1[i];
	uc_str2 = str2[i];
	return (uc_str1 - uc_str2);
}
