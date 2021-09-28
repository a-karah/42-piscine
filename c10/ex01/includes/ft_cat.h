#ifndef FT_CAT_H
# define FT_CAT_H
# define STDIN 0
# define STDOUT 1
# define STDERR 2

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

void	ft_putchar(int fd, char c);
void	ft_putstr(int fd, char *s);
void	handle_error(char *fname);
void	read_from_stdin(void);
void	read_from_file(char *fname);

#endif
