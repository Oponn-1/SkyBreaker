#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <unistd.h>

void startup_message() {
	printf("\n");
	printf("*****************************************\n");
	printf("****           Sky Breaker           ****\n");
	printf("*****************************************\n\n");
	printf("From Andres De La Fuente Duran\n");
	printf("\n\n\n");
}

void load_game_prompt() {
	char* fname = "SAVE.bin";
	if (access(fname, F_OK) != -1) {
		printf("I've seen you before haven't I?");
	} else {
		printf("You're a new face.");
	}
	printf("\n\n");
}

int main(){
	startup_message();
	load_game_prompt();
	return 0;
}
