#include <stdio.h>
#include <math.h>
#include <string.h>
#include <windows.h>

int main(int argc, char* argv[])
{

	//1st task
	double height;
	double weight;
	printf("Enter height and weight: ");
	scanf("%lf %lf", &height, &weight);
	printf("Height - %lf, weight - %lf \n", height, weight);
	double index = (weight / (height * height));
	printf("Index: %lf \n", index);

	//2nd task
	double firstn, secondn, thirdn, fourthn, maxn;
	printf("Enter 4 numbers: ");
	scanf("%lf%lf%lf%lf", &firstn, &secondn, &thirdn, &fourthn);
	if ((firstn > secondn) && (firstn > thirdn) && (firstn > fourthn))  maxn = firstn;
	if ((secondn > firstn) && (secondn > thirdn) && (secondn > fourthn))  maxn = secondn;
	if ((thirdn > firstn) && (thirdn > secondn) && (thirdn > fourthn))  maxn = thirdn;
	if ((fourthn > firstn) && (fourthn > secondn) && (fourthn > thirdn))  maxn = fourthn;
	printf("Max number is %lf \n", maxn);

	//3rd task with *
	double firstNum;
	double secondNum;
	printf("Enther first number: \n");
	scanf("%lf", &firstNum);
	printf("Enther second number: \n");
	scanf("%lf", &secondNum);
	firstNum = firstNum + secondNum;
	secondNum = firstNum - secondNum;
	firstNum = firstNum - secondNum;
	printf("First number: %lf, second number: %lf \n", firstNum, secondNum);

	//4th task
	//*function above
	double a, b, c;
	printf("Squad equation looks like: ax^2 + bx + c = 0. Please enter a, b, and c: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	double x1, x2, d;
	d = pow(b, 2) - 4 * a * c;
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		printf("First solution: %lf, second solution: %lf", x1, x2);
	}
	else if (d = 0) {
		x1 = (-b / 2 * a);
		printf("Only one solution: %lf", x1);
	}
	else {
		printf("The equation has no decision.\n");
	}

	//5th task
	char month[15];
	char season[15];
	printf("Please enter month: ");
	char jan[15] = "january";
	char feb[15] = "february";
	char mar[15] = "march";
	char apr[15] = "april";
	char may[15] = "may";
	char jun[15] = "june";
	char jul[15] = "july";
	char aug[15] = "august";
	char sep[15] = "september";
	char oct[15] = "october";
	char nov[15] = "november";
	char dec[15] = "december";
	scanf("%s", &month);
	if (strcmp(month, jan) == 0) {
		printf("Season is winter");
	}
	if (strcmp(month, feb) == 0) {
		printf("Season is winter");
	}
	if (strcmp(month, dec) == 0) {
		printf("Season is winter");
	}
	if (strcmp(month, mar) == 0) {
		printf("Season is spring");
	}
	if (strcmp(month, apr) == 0) {
		printf("Season is spring");
	}
	if (strcmp(month, may) == 0) {
		printf("Season is spring");
	}
	if (strcmp(month, jun) == 0) {
		printf("Season is summer");
	}
	if (strcmp(month, jul) == 0) {
		printf("Season is summer");
	}
	if (strcmp(month, aug) == 0) {
		printf("Season is summer");
	}
	if (strcmp(month, sep) == 0) {
		printf("Season is autumn");
	}
	if (strcmp(month, oct) == 0) {
		printf("Season is autumn");
	}
	if (strcmp(month, nov) == 0) {
		printf("Season is autumn");
	}
	


	return 0;

}