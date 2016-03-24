/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str == nullptr)
		return NULL;
	int i, j=0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			j = i+1;
	}
	char *r;
	if (i - j == 0||str[j]=='\0')
	{
		r = "";
		return r;
	}
	r = (char*)malloc((i - j)*sizeof(char));
	for (i = j; str[i] != '\0'; i++)
		r[i - j] = str[i];
	r[i-j] = '\0';
	return r;
}
