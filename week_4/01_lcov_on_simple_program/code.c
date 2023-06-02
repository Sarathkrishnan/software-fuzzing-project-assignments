#include <stdio.h>

void processFile(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return;
    }

    // Read the contents of the file
    char buffer[100];
    fgets(buffer, sizeof(buffer), file);
    printf("File contents: %s", buffer);

    // Simulate branching paths based on file contents
    if (buffer[0] == 'A') {
        printf("File starts with 'A'\n");
    } else {
        printf("File does not start with 'A'\n");
    }

    if (buffer[1] == 'B') {
        printf("Second character is 'B'\n");
    } else {
        printf("Second character is not 'B'\n");
    }

    // More branching paths based on file contents
    if (buffer[2] >= '0' && buffer[2] <= '9') {
        printf("Third character is a digit\n");
    } else {
        printf("Third character is not a digit\n");
    }

    fclose(file);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <file>\n", argv[0]);
        return 1;
    }

    const char* filename = argv[1];
    processFile(filename);

    return 0;
}
