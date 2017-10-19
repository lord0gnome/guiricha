/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_str_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guiricha <guiricha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/19 14:22:02 by guiricha          #+#    #+#             */
/*   Updated: 2017/10/19 15:36:02 by guiricha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // fortesting remove after
#include "libft.h"
#include <stdlib.h>

static void	order_indexes_correctly(char **array, int *array_indexes, char asc) {
	int index;
	int	result_of_cmp;
	int	tmpind;

	index = 0;
	while (array_indexes[index + 1] != -1) {
		if ((result_of_cmp =
			ft_strcmp(array[array_indexes[index]],
					  array[array_indexes[index + 1]])) != 0) {
			printf("checking for \n%s\n*and*\n%s\n", array[array_indexes[index]], array[array_indexes[index + 1]]);
			printf("result of cmp is \'%d\'\n", result_of_cmp);
			if ((asc && result_of_cmp > 0) || (!asc && result_of_cmp < 0)) {
				printf("asc && res > 0 = [%d] !asc && res < 0 = [%d]\n", (asc && result_of_cmp > 0), (!asc && result_of_cmp < 0));
				tmpind = array_indexes[index];
				array_indexes[index] = array_indexes[index + 1];
				array_indexes[index + 1] = tmpind;
				index = 0;
				continue ;
			}
		}
		index++;
	}
}


char	**ft_sort_str_array_verbose(char **array, int array_len, char ascending) {
	int		*array_indexes;
	int		index;
	char	**ret_array;

	if (array_len < 2 || !array)
		return (array);
	array_indexes = (int *)malloc(sizeof(int) * array_len + 1);
	array_indexes[array_len] = -1;
	printf("array length is %d. allocating indexes for this length\n", array_len);
	index = 0;
	while (index < array_len) {
		array_indexes[index] = index;
		printf("array_indexes[%d] = %d\n", index, index);
		index++;
	}
	order_indexes_correctly(array, array_indexes, ascending);
	ret_array = (char **)malloc(sizeof(char *) * (array_len + 1));
	ret_array[array_len] = NULL;
	index = 0;
	while (array_indexes[index] != -1) {
		ret_array[index] = (char *)malloc(sizeof(char) * ft_strlen(array[array_indexes[index]]) + 1);
		ret_array[index][ft_strlen(array[array_indexes[index]])] = '\0';
		ft_strcpy(ret_array[index], array[array_indexes[index]]);
		printf("now %dth str is [%s]\n", index, array[array_indexes[index]]);
		index++;
	}
	free(array_indexes);
	return (ret_array);
}
