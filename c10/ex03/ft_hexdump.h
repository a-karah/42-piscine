#ifndef FT_HEXDUMP
# define FT_HEXDUMP

# define STDIN 0
# define STDOUT 1
# define STDERR 2
# define BUFLEN 4096

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <fcntl.h>

void	ft_hexdump(char *fname);
void	handle_error(char *fname);

void	ft_putchar(char c, int fd);
void	ft_putstr(char *s, int fd);

#endif
