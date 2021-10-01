#ifndef FT_TAIL_H
# define FT_TAIL_H
# define STDIN 0
# define STDOUT 1
# define STDERR 2
# define BUFFER_SIZE 2048

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

void	ft_putchar(int fd, char c);
void	ft_putstr(int fd, char *s);
int		ft_atoi(char *s);
int		ft_strcmp(char *s1, char *s2);
void	handle_error(char *fname);
void	read_stdin(void);
void	read_file(char *fname, int read_from);

#endif
