#include <stdio.h>
#include <math.h>

//to change a number's base to 10 (whichs base less than 10)

int main()
{
	int num, base, sum = 0, i, dec, x, o, k;
	printf("Write the number you want to convert to base 10 :");
	scanf("%d", &num);

	printf("Write the base of your number :");
	scanf("%d", &base);

	k = num;

//break down into its digits
	for (i = num, dec = 1; 1; i--, dec++)
	{
		num = floor(num / 10);

		if (num == 0)
		{
			break;
		}
	}
	printf("%d digit number\n", dec);

//use the formula on read me
	for (o = dec - 1; o >= 0; o--)
	{
		x = floor(k / pow(10, o));
		sum += x* pow(base, o);
		k %= (int) pow(10, (int) o);
		printf("x=%d\n", x);
	}

	printf("base 10 = %d", sum);

	return 0;
}
