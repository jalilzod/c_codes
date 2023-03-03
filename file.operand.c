#include<stdio.h>
int main(void)
{
	FILE* in = fopen("fl.txt", "r");
	FILE* ou = fopen("test.txt", "w");
	int n, m = 0, sum = 0;
	int great = 0;
	if (in == NULL) {
		printf("\aError NOT FOUND!!");
	}
	fscanf(in, "%d", &n);
	while (n != 0) {
		m++;
		if (n > great)
			great = n;
		sum += n;
		fscanf(in, "%d", &n);
	}

	if (m == 0) {
		fprintf(ou, "No any numbers were entered!");
	}
	else {
		fprintf(ou, "%d Numbers were entered\n", m);
		fprintf(ou, "The sum of numbers is %d\n", sum);
		fprintf(ou, "The largest is %d\n", great);
		fprintf(ou, "The average is %f\n", (double)sum/m);
	}
	fclose(in);
	fclose(ou);

	return 0;
}
