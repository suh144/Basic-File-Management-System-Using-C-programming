#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile();
void writeFile();
void readFile();
void deleteFile();
void renameFile();
void fileInfo();

int main()
{
    int choice;

    while (1)
    {
        printf("\n=================================\n");
        printf("      File Management System\n");
        printf("=================================\n");

        printf("1. Create File\n");
        printf("2. Write to File\n");
        printf("3. Read File\n");
        printf("4. Delete File\n");
        printf("5. Rename File\n");
        printf("6. File Information\n");
        printf("7. Exit\n");

        printf("\nEnter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice)
        {
            case 1:
                createFile();
                break;

            case 2:
                writeFile();
                break;

            case 3:
                readFile();
                break;

            case 4:
                deleteFile();
                break;

            case 5:
                renameFile();
                break;

            case 6:
                fileInfo();
                break;

            case 7:
                printf("Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

void createFile()
{
    char filename[100];

    printf("Enter file name: ");
    fgets(filename, sizeof(filename), stdin);

    filename[strcspn(filename, "\n")] = '\0';

    FILE *file = fopen(filename, "w");

    if (file == NULL)
    {
        printf("Error creating file.\n");
        return;
    }

    fclose(file);

    printf("File created successfully.\n");
}

void writeFile()
{
    char filename[100];
    char text[500];

    printf("Enter file name: ");
    fgets(filename, sizeof(filename), stdin);

    filename[strcspn(filename, "\n")] = '\0';

    FILE *file = fopen(filename, "a");

    if (file == NULL)
    {
        printf("File not found.\n");
        return;
    }

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("Data written successfully.\n");
}

void readFile()
{
    char filename[100];
    char line[500];

    printf("Enter file name: ");
    fgets(filename, sizeof(filename), stdin);

    filename[strcspn(filename, "\n")] = '\0';

    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("File not found.\n");
        return;
    }

    printf("\n===== File Contents =====\n");

    while (fgets(line, sizeof(line), file))
    {
        printf("%s", line);
    }

    fclose(file);

    printf("\n=========================\n");
}

void deleteFile()
{
    char filename[100];
    char confirm;

    printf("Enter file name: ");
    fgets(filename, sizeof(filename), stdin);

    filename[strcspn(filename, "\n")] = '\0';

    printf("Are you sure you want to delete %s? (y/n): ",
           filename);

    scanf(" %c", &confirm);
    getchar();

    if (confirm == 'y' || confirm == 'Y')
    {
        if (remove(filename) == 0)
        {
            printf("File deleted successfully.\n");
        }
        else
        {
            printf("Error deleting file.\n");
        }
    }
    else
    {
        printf("Deletion cancelled.\n");
    }
}

void renameFile()
{
    char oldName[100];
    char newName[100];

    printf("Enter current file name: ");
    fgets(oldName, sizeof(oldName), stdin);

    oldName[strcspn(oldName, "\n")] = '\0';

    printf("Enter new file name: ");
    fgets(newName, sizeof(newName), stdin);

    newName[strcspn(newName, "\n")] = '\0';

    if (rename(oldName, newName) == 0)
    {
        printf("File renamed successfully.\n");
    }
    else
    {
        printf("Error renaming file.\n");
    }
}

void fileInfo()
{
    char filename[100];

    printf("Enter file name: ");
    fgets(filename, sizeof(filename), stdin);

    filename[strcspn(filename, "\n")] = '\0';

    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("File not found.\n");
        return;
    }

    fseek(file, 0, SEEK_END);

    long size = ftell(file);

    fclose(file);

    printf("\nFile Information\n");
    printf("-----------------------\n");
    printf("Name : %s\n", filename);
    printf("Size : %ld bytes\n", size);
}
