#include "../headers/syscall-reborn.h"

 int ft_dup2(int oldfd, int newfd)
 {
    int new_fd;

    if (oldfd == newfd)
        return (oldfd);
    close(newfd);
    new_fd = fcntl(int fd, int cmd, ...);
 }