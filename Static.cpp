/**
 * ¾²Ì¬static
 */

#include <stdio.h>
extern int g_val;

void test() {
	static int a = 1;
	a++;
	int b = a;
	printf("%d ", a);
}

int main() {
	printf("%d \n", g_val);

	int i = 0;
	while (i < 10) {
		test();
		i++;
	}
	return 0;
}