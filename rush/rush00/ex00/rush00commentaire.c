/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-m <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 10:14:05 by tpinto-m          #+#    #+#             */
/*   Updated: 2021/07/11 21:35:23 by tpinto-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//fonction prototypé pour que l'ordinateur sache qu'il faut chercher
//la fonction dans un autre fichier
void	ft_putchar(char c);
//fonction qui permet d'imprimer le charactère
void	ft_printline(int	condition, char	chartrue, char	charfalse)
{
	//condition si un charactère est imprimé
	if (condition)
	{
		//imprime un charactere si la condition est vrai
		ft_putchar(chartrue);
	}
	else
	{
		//imprime un charactere si la condition est fausse
		ft_putchar(charfalse);
	}
}
//fonction rush qui contient l'algorithme pour imprimer
void	rush00(int	x, int	y)
{
	//variable pour compter les lignes
	int	line;
	//variable pour compter les colonnes
	int	column;
	//initaliser les variables lignes et colonnes pour commencer à 1
	line = 0;
	column = 0;
	//boucle qui permet de compter les colonnes
	while (column++ < y)
	{
		//boucle qui  permet de compter les lignes
		while (line++ < x)
		{
			//condition pour savoir si la ligne est la première ou la dernière
			if (column == 1 || column == y)
			{
				//appel de la fonction pour imprimer les lignes
				//si vrai affiche 'o' sinon '-'
				ft_printline(line == 1 || line == x, 'o', '-');
			}
			//autrement les autres lignes tu imprimmes ces lignes
			else
			{
				//appel de la fonction pour imprimmer les lignes
				//du millieu par | et ' '
				ft_printline(line == 1 || line == x, '|', ' ');
			}
		}
		//Initialise la ligne à 0 pour qu'il recommence sur la première position
		//de cette ligne
		line = 0;
		//pour aller à la ligne suivante
		ft_putchar('\n');
	}
}
