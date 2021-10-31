#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 30
void make_and_print_cipher(char *string,int key)
{
    char ciph[size][size];
    int rowsCounter = 0;
    int stringElements, cols;
    for (stringElements = 0; stringElements < strlen(string);)
    {
            for (cols = 0; cols < key;)
            {
                if (stringElements <= strlen(string))
                {   
                        ciph[rowsCounter][cols] = string[stringElements];
                        stringElements++;
                        cols++;
                }
                else
                {
                    break;
                }
            }
            rowsCounter++;
    }
    printf("Cipher: ");
    int rows;
    for (cols = 0; cols < key; cols++)
    {
        for (rows = 0; rows < rowsCounter; rows++)
        {
                printf("%c", ciph[rows][cols]);
        }
    }

}
main()
{
    char str[size];
    int key;
    printf("Enter a string: ");
    gets(str, size);
    printf("Enter k: ");
    scanf_s("%d", &key);
    make_and_print_cipher(str, key);
   
}