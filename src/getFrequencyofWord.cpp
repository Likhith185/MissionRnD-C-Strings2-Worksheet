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
	{
		int i = 0, j = 0, k, count = 0;
		while (str[i] != '\0')
		{
			k = i;
			while (word[j] != '\0' && str[k] == word[j])
			{
				j++;
				k++;
			}
			if (word[j] == '\0')
				count++;
			j = 0;
			i++;
		}
		return count;
	}
}

