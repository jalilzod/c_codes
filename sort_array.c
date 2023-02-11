
#include <string.h>
#include <stdio.h>
#define MAXLINE 5000
#define MAXLEN 500
char* lineptr[MAXLINE];
int readline(char* lineptr[], int nlines);
void writelines(char* lineptr[], int nlines);
void qicksort(char* lineptr[], int L, int R);


int getline(char* s, int n);
int getline(char *s, int n)
{
    int i, c;
    for (i = 0; i < n - 1 && (c = getchar()) != EOF && c != '\0';i++)
        s[i] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}
char* alloc(int);
int readline(char* lineptr[], int maxlines)//01
{
    int len, nlines;
    char* p, line[MAXLEN];
    nlines = 0;
    while ((len = getline(line, MAXLEN)) > 0)
    {
        p = (char*)malloc((len + 1) * sizeof(char));
        line[len - 1] = 0;
        strcpy(p, line);
        lineptr[nlines++] = p;
    }
    return nlines;
}



void writelines(char* lineptr[], int nlines)
{
    int i;
    for (i = 0; i < nlines; i++)
        printf("%s\n", lineptr[i]);
}

void qsort(char* s[], int left, int right)
{
    int i, last;
    if (left >= right)
        return;
    swap(s, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++)
        if ((s[i]<s[left]) < 0)
            swap(s, ++last, i);
    swap(s, left, last);
    qsort(s, left, last-1);
    qsort(s, last+1, right);
}

void swap(char* s[], int i, int j)
{
    char* tmp;
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
}

int main(void)
{
    int nlines;
    if ((nlines = readline(lineptr, MAXLINE)) >= 0) {
        qsort(lineptr, 0, nlines - 1);
        writelines(lineptr, nlines);
        return 0;
    }
    else {
        printf("error:input too big to sort\n");
        return 1;
    }

    return 0;
}
