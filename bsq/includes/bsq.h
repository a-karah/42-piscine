#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		error(char *fname);
int		handle_error(char *fname);
char	*ft_strcat(char *dest, char *src);
int		ft_atoi(char *str);
int		**get_line(int fdesc, int l, char *eof, char *c);
int		**read_file(char *filename, int col);
void	print_map(int **map);
char	*get_eof(int fdesc, char *c);
int		get_val_eof(char *eof, char c);
int		get_line_num(int fdesc, char *c);
int		is_identical(char *eof);
int		*get_g_row_col(void);
int		**create_2d(int row, int col);
void	deallocate_2d(int **arr, int row);
int		*find_max(int **map, int row, int col);
void	print_result(int **m, int rowcol[2], int mij[3], char *eof);
char	*get_g_eof(void);
char	*ft_strcpy(char *dest, char *src);
int		ft_str_is_printable(char *str);
int		check_content(char empty, char obstacle, char input);

#endif
