#ifndef HEADER_H
# define HEADER_H

int		ft_atoi(char *str, int n);
int		is_alpha(char c);
int		ft_strcmp(char *s1, char *s2, int n);
int		jump_to_dict(int len, int file_d);
void	initial_digits(char gb[3], int len, char *str);
int		jump_to_line(int len, char *str, int file_d);
int		ft_strlen(char *str);
int		write_number(int file_d);
int		send_number(int ln, char *str, char *file_name);
int		begin_func(int *len_s, char **str, char *file_name);
int		end_func(int *len_s, char **str, char *fname);
int		number_func(int line_s, char *str, char *file_name);
int		control_func(char *arg, char *file_name, int len);
char	*ft_strcpy(char *dest, char *src);
int		is_digit(char c);
int		error_handle(char *filename);
int		input_error_handle(char *str);

#endif
