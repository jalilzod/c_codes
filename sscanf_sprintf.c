struct S
{
	char ch[20];
	int age;
	float score;
};

int main(void)
{
	struct S s = { "Ali",20,95.5 };
	char arr[100];
	struct S tmp = { 0 };
	sprintf(arr, "%s %d %f", s.ch, s.age, s.score);
	printf("%s\n", arr);

	sscanf(arr, "%s %d %f\n", tmp.ch, &(tmp.age), &(tmp.score));

	printf("%s %d %f\n", tmp.ch, tmp.age, tmp.score);
	return 0;
}
