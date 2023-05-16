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

void	menu()
{
	ft_putstr("========== MENU ==========\n");
	ft_putstr("|| 0 - SAIR             ||\n");
	ft_putstr("|| 1 - CONTINUAR        ||\n");
	ft_putstr("==========================\n\n");
}

void	select(t_list *env)
{
	int		opitions;
	char	buffer[30];

	opitions = 1;
	buffer[29] = '\0';
	while (opitions != 0)
	{
		menu();
		read(1, buffer, 29);
		del_specifc(env, buffer);
	}
}

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
