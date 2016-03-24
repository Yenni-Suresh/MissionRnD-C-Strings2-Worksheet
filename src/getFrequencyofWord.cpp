/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	int i = 0, j = 0, count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == word[j])
			j++;
		else j = 0;
		if (word[j] == '\0')
		{
			count++;
			i = i - j + 1;
			j = 0;
		}
		i++;
	}
	return count;
}
int find(char *str, int from, char *word)
{
	int j = 0, count = 0, go;
	if (str[from] == '\0')
		return 0;
	while (str[from] != '\0')
	{
		if (str[from] == word[j])
			j++;
		else j = 0;
		if (word[j] == '\0')
		{
			count++;
			break;
		}
		from++;
	}
	if (count == 1)
		go = go - j + 2;
	else return 0;
	return find(str, go, word) + count;
}
int count_word_int_str_way_2_recursion(char *str, char *word){
	
	return find(str, 0, word);
}

