#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 30
void Cipher(char *str,int k)
{
    char ciph[size][size];
    int rows = 0;
    int i, j;
    for (i = 0; i < strlen(str);)
    {
            for (j = 0; j < k;)
            {
                if (i <= strlen(str))
                {   
                        ciph[rows][j] = str[i];
                        i++;
                        j++;
                }
                else
                {
                    break;
                }
            }
            rows++;
    }
    printf("Cipher: ");
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < rows; j++)
        {
                printf("%c", ciph[j][i]);
        }
    }

}
main()
{
    char str[size];
    int k;
    printf("Enter a string: ");
    gets_s(str, size);
    printf("Enter k: ");
    scanf_s("%d", &k);
    Cipher(str, k);
   
}