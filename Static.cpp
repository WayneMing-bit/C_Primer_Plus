/**
 * æ≤Ã¨±‰¡østatic
 */

#include <stdio.h>
extern int g_val;
extern int Add(int x, int y);

void test() {
	static int a = 1;
	a++;
	int b = a;
	printf("%d ", a);
}


int main() {
	printf("%d \n", g_val);

	printf("%d \n", Add(1, 2));

	int i = 0;
	while (i < 10) {
		test();
		i++;
	}
	return 0;
}