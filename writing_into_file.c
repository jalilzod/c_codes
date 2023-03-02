#include <stdio.h>

int main(void)
{
	FILE* in = fopen("fl.txt", "r");
	FILE* out = fopen("output.txt", "w");
	int n, m = 0, sum = 0; int great = 0;
	if (in == NULL) {
		printf("NOT FOUND!!\a");
		return -1;
	}
	fscanf(in, "%d", &n);
	while (n != 0) {
		m++;
		sum += n;
		if (n > great)
			great = n;
		fscanf(in, "%d", &n);
	}
	if (m == 0) {
		printf("Not numbers FOUND\a");
	}
	else {
		fprintf(out, "%d Numbers were entered\n", m);
		fprintf(out, "The sum of numbers is %d\n", sum);
		fprintf(out, "The avarage is %f\n", (double)sum/m);
		fprintf(out, "The largest is %d\n", great);

	}
	fclose(in);
	fclose(out);

	return 0;
}
