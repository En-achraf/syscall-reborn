/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acennadi <acennadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 15:51:23 by acennadi          #+#    #+#             */
/*   Updated: 2025/05/30 16:00:33 by acennadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//F_DUPFD : Duplicate the file descriptor to greater than or equal to arg (newfd)

#include "../headers/syscall-reborn.h"

int ft_dup(int oldfd)
{
    int new_fd;
    
    new_fd = fcntl(oldfd, F_DUPFD, 0);
    if (new_fd < 0)
        return -1;
    return (new_fd);
}
