#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int n, n2, n3,s,s2,s3;
int x = 1;
int l = 1;
int ans = 1;
int main() {
	printf("Enter first number :");
	scanf("%d", &s);
	printf("Enter secound number :");
	scanf("%d", &s2);
	printf("Enter Third number :");
	scanf("%d", &s3);
	n = abs(s);
	n2 = abs(s2);
	n3 = abs(s3);
	while (l == 1)
	{
		if (n % x == 0 || n2 % x == 0 || n3 % x == 0) {
			ans = ans * x;
		}
		else if (n % x != 0 && n2 % x != 0 && n3 % x != 0) {
			ans = ans * n * n2 * n3;
			l = 0;
		}
		if (n % x == 0 ) {
			n = n / x;

		}
		if (n2 % x == 0) {
			n2 = n2 / x;
		}
		if (n3 % x == 0) {
			n3 = n3 / x;
		}
		x = x + 1;
	}
	printf("The least common multiple : %d",ans);
}