#include <stdio.h>


int main()
{

 int N;
    char c;
    scanf("%d", &N);
    while ((c = getchar()) != '.')
    {   
        if (c >= 'a' && c <= 'z')
        {
            c = (c - 'a' + N) % 26 + 'a'; 
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = (c - 'A' + N) % 26 + 'A'; 
        }
        printf("%c", c);
    }
    printf(".\n");
    return 0;
}