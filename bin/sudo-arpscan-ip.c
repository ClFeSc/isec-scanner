#include <stdlib.h>
#include <unistd.h>

int main() {
	setuid(0);
	system("/home/kali/.local/isec/bin/arpscan-ip");
	return 0;
}
