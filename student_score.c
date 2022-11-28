#include <stdio.h>

int main()
{
	//inter score of subject
	int id = 0;
	float c_score = 0.0;
	float math_score = 0.0;
	float eng_score = 0.0;
	scanf("%d;%f,%f,%f",&id, &c_score, &math_score, &eng_score);

	//output
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f", id, c_score, math_score, eng_score);

	return 0;
}


