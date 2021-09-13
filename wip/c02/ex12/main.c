void	ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char str[]	= "lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nullaariatur. Excepteur sint occaecat cupidatat nonroident, sunt in culpa qui officia deserunt mollit anim id est laborum.\t\t\t\r";
	unsigned int size = sizeof(str);

	ft_print_memory(&str, size);
	return 0;
}
