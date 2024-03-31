#include <stdio.h>

int main() {
	FILE *file;
	char line[100];
	
	//open in read mode
	file = fopen("sample.txt", "r");

	//check if exists
	if (file == NULL) {
		printf("not found.\n");
		return 1;
	}

	// read and print each line
	while (fgets(line, sizeof(line), file)) {
		printf("%s", line);
	}

	//close the file
	fclose(file);
	return 0;
}
