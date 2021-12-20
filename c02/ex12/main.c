#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	str1[] = "Alice was beginning to get very tired of sitting by her sister on the bank, and of having nothing to do. Once or twice she had peeped into the book her sister was reading, but it had no pictures or conversations in it, and what is the use of a book, thought Alice, without pictures or conversations?\n";
	char	str2[] = "Bonjour, bonjour les amis. Bonjour, bonjour les amis. Comment ça va ? Très bien ! Comment ça va ? Très bien ! Bonjour, bonjour les copines. Bonjour, bonjour les copains. Comment ça va ? Très bien ! Comment ça va ? Très bien ! Si aujourd’hui il fait beau, Si aujourd’hui il fait beau, Comment ça va ? Très bien ! Comment ça va ? Très bien ! Et si aujourd’hui il pleut, Et si aujourd’hui il pleut, Comment ça va ? Très bien ! Comment ça va ? Très bien ! Si aujourd’hui il fait froid, Si aujourd’hui il fait froid, Comment ça va ? Très bien ! Comment ça va ? Très bien ! Si aujourd’hui il fait chaud, Si aujourd’hui il fait chaud, Comment ça va ? Très bien ! Comment ça va ? Très bien !";
	ft_print_memory(str2, sizeof(str2));
	return (0);
}
