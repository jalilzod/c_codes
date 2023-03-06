#include <string.h>
#include <stdlib.h>
typedef struct { char name[10]; int score; }Student;
int cmp(const void* a, const void* b)
{
	Student* sa = (Student*)a;
	Student* sb = (Student*)b;
	if (sa->score == sb->score)
		return (-1) * strcmp(sa->name, sb->name);
	else return sb->score - sa->score;
}
int main()
{
	Student t[5] ={ "Jack",60,"Mary",70,"John",80,"Mike",70,"Kitty",70 };
	qsort(t, 5, sizeof(t[0]), cmp);
	for (Student* p = t; p < t + 5; p++)
		printf("%s %d\n", p->name, p->score);
	return 0;
}
