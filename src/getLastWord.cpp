/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int i = 0;
	char *last_word, *last_before;
	last_word = str;
	while (str[i] != '\0'){
		if (str[i] == ' '&&str[i + 1] != ' '&&str[i + 1] != '\0')
			last_word = str + i + 1;
		i++;
	}
	last_before = (char *)malloc(i*sizeof(char));
	for (i = 0; last_word[i] != '\0'&&last_word[i] != ' '; i++)
		last_before[i] = last_word[i];
	last_before[i] = '\0';
	return last_before;
}

