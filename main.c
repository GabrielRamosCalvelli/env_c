/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcalvell <gcalvell@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:18:46 by gcalvell          #+#    #+#             */
/*   Updated: 2023/05/01 19:18:46 by gcalvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ds.h"

int	main(int argc, char *argv[], char *envp[])
{
	t_list	env;

	(void)(argc);
	(void)(argv);
	env.head = NULL;
	env.tail = NULL;
	copy_env(&env, envp);
	print_lst(&env);
	del_lst(&env);
	return (0);
}
