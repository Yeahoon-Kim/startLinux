#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int var = 1;

void interrupt(int signo) {
	if(signo == SIGINT) var = 0;
}

int main() {

	while(var) {
		sleep(1);
		puts("loop\n");
	}

	return 0;
}
