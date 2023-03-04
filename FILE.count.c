#include <stdio.h>
#define MaxReg 40
#define OverTime 1.5

int main(void)
{
	FILE* in = fopen("fl.txt", "r");
	FILE* out = fopen("data.txt", "w");
	char firstn[20];
	char lastn[20], name[40],bestPay[40];
	double hours, rate, regPay, ovPay, netPay;
	double wageBill = 0, mostPay = 0;
	int numEmp = 0;

	fprintf(out, " Name       Hours    Rate    Regular    Overtime    Net\n\n");

	fscanf(in, "%s", firstn);
	while (strcmp(firstn, "END") != 0) {
		numEmp++;
		fscanf(in, "%s%lf%lf", lastn, &hours, &rate);
		if (hours <= MaxReg) {
			regPay = hours * rate;
			ovPay = 0;
		}
		else {
			regPay = MaxReg * rate;
			ovPay = (hours - MaxReg) * rate * OverTime;
		}
		netPay = regPay + ovPay;
		strcpy(name, firstn);
		strcat(name, " ");
		strcat(name, lastn);
		fprintf(out, "%-15s %5.1f   %6.2f", name, hours, rate);
		fprintf(out, "%9.2f %9.2f   %7.2f\n", regPay, ovPay, netPay);
		fscanf(in, "%s", firstn);

		if (netPay > mostPay) {
			mostPay = netPay;
			strcpy(bestPay, name);
		}
		wageBill += netPay;
		fscanf(in, "%s", firstn);
	}
	fprintf(out, "Numbers of employees: %d\n", numEmp);
	fprintf(out, "Total wage bill:$%3.2f\n", wageBill);
	fprintf(out, "%s Earned the most pay $%3.2f", bestPay,mostPay);

	fclose(in);
	fclose(out);

	return 0;
}
