#include <stdio.h>

int main(void) {
	char i, j;

	printf("== Printable ASCII codes ==\n\n");
	printf("    |0123456789ABCDEF\n");
	printf("----+----------------\n");

	for (i = 2; i < 8; i++) {
		printf("0x%d?|", i);
		for (j = 0; j < 16; j++) {
			printf("%c", i << 4 | j);
		}
		printf("\n");
	}
	return 0;
}
