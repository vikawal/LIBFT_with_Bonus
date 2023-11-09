/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:13:44 by vmyshko           #+#    #+#             */
/*   Updated: 2023/10/04 18:38:03 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int main()
// {
//     printf("%d", ft_isdigit('3'));
// }
