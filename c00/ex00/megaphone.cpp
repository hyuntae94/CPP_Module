/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 00:44:49 by hyunkim           #+#    #+#             */
/*   Updated: 2021/07/23 01:25:46 by hyunkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    uppercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}

int     main(int argc, char *argv[])
{
    if (argc == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        for (int i = 1; i < argc; i++)
        {
            for (int j = 0; argv[i][j]; j++)
                std::cout<<uppercase(argv[i][j]);
        }
        std::cout<<"\n";
    }
}