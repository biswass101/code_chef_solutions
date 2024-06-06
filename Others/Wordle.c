#include<stdio.h>

int main()

{

    int t;
    scanf("%d", &t);
    while(t--)
    {
        char str1[100], str2[100];
        char new_str[100];
        scanf("%s %s", &str1, &str2);
        for(int i = 0; i < 5; i++)
        {
            if(str1[i] == str2[i])
            {
                new_str[i] = 'G';
            }
            else
            {
                new_str[i] = 'B';
            }
        }
        
        for(int i = 0; i < 5; i++)
        {
            printf("%c", new_str[i]);
        }
        printf("\n");
    }

    return 0;
}