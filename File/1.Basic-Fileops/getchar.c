#include <stdio.h>
#include <unistd.h>

char my_get_char(void) {
	char ch;
	if (read(0, &ch, 1) < 0) {
		printf("Error reading character");
		return 0;
	}
	return ch;
}

int main() {
	char ch;

	ch = my_get_char();
	if (0 != ch) {
		printf("%c\n",ch);
	}
}
