#include <stdio.h>

int main() {
    FILE *file;         // Declare a pointer to a FILE structure
    char filename[100]; // Store the filename
    char ch;            // Store each character read from the file

    printf("Enter the filename: ");
    scanf("%s", filename);  // Read the filename from the user

    // Open the file in "r" mode (read mode)
    file = fopen(filename, "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Read and print the file contents
    printf("File contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);  // Print each character read from the file
    }

    // Close the file
    fclose(file);

    return 0;
}
Output
fileread-op

Writing contents to the file
#include <stdio.h>

int main() {
    FILE *file;                     // Declare a pointer to a FILE structure
    char filename[100];             // Store the filename
    char content[1000];             // Store the content to be written to the file

    printf("Enter the filename: ");
    scanf("%99s", filename);        // Read the filename from the user

    // Open the file in "w" mode (write mode)
    file = fopen(filename, "w");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter content to write to the file (max 1000 characters):\n");

    // Clear the input buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // Read content from the user using fgets()
    fgets(content, sizeof(content), stdin);

    // Write the content to the file using fputs()
    fputs(content, file);

    // Close the file
    fclose(file);

    printf("Content written to the file successfully.\n");

    return 0;
}
