#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 100
void Lower(char phras[], char word[])
{
	int i = 0, j = 0;
	char ch;
	while ((ch = phras[i++]) != '\0') //to index the given phrase sored in phrase
		if (isalpha(ch))
	word[j++] = tolower(ch);//to index the converted pharse stored in word

	word[j] = '\0';
}

int palindrome(char word[])
{
	int left = 0;
	int right = strlen(word) - 1;
	while (left < right)
		if (word[left++] != word[right--]) return 0;
		return 1;
}

int main(void)
{
	char phrase[N], word[N];
	printf("Type a phrase ");
	fgets(phrase,N,stdin);

	while (strcmp(phrase, "") != 0) {
		Lower(phrase, word);
		printf("Converted to: %s\n", word);
		if (palindrome(word)) printf("its palindrome \n");
		else printf("Not palindrome \n");
		printf("Type a word ");
		gets(phrase);
	}

	return 0;
}
