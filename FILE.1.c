int main( )
{
	FILE* in = fopen("fl.txt", "r");
	int great = 0;
	int small;
	int sum = 0, n = 0,m;
	if (in == NULL) {
		printf("Not found");
	}
	fscanf(in, "%d", &m);
	while (m != 0) {
		n++;
		sum += m;
		if (m > great)
			great = m;

		fscanf(in, "%d", &m);
	}
	if (n == 0) {
		printf("No number are added");
	}

	else {
		printf("%d Numbers were added \n", n);
		printf("Sum of numbers are %d\n", sum);
		printf("Average is %3.2f\n", (double)sum/n);
		printf("Greater is %d\n", great);
	}

	fclose(in);

	return 0;
}
