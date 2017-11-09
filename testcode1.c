#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int alpha = 'a';
    
    if(isalpha(alpha))
    {
        printf("%c", alpha);
    }
}