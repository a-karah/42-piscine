#ifndef FT_DISPLAY_H
# define FT_DISPLAY_H
# define STDIN 0
# define STDOUT 1
# define STDERR 2

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putchar(int fd, char c);
void	ft_putstr(int fd, char *s);
void	handle_error(int error);

#endif
