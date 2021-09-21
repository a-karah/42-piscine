#include "ft_stock_str.h"

int	main(int argc, char **argv)
{
	struct s_stock_str	*strs = ft_strs_to_tab(argc, argv);
	ft_show_tab(strs);
	return (0);
}
