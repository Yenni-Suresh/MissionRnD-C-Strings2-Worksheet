/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

char * get_sub_string(char *str, int i, int j){
	if (str == nullptr || (i<0&&j<0)||(i>j))
    return NULL;
	char *r;
	r = (char*)malloc((j - i)*sizeof(char));
	if (i < 0)
		i = 0;
	int k = 0;
	while (i <= j&&str[i]!='\0')
	{
			r[k++] = str[i++];
	}
	r[k] = '\0';
	if (k == 0)
		return NULL;
	return r;
}
