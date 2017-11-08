#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // declare global variables
    string k, userinput;
    int key;
    // if statement to check for arguments used - must be equal to two arguments
    if(argc == 2)
    {
        k = argv[1];// Step 1 - Get key from command line argument

        key = atoi(k);// Step 2 - Turn key into integer

        printf("plaintext: "); // Step 3 - Prompt user for plain text
        userinput = get_string();

        if(userinput != NULL)
        {
            for(int i = 0, n = strlen(userinput); i < n; i++)
            {
                // for(int j = 0, iterate1 = n[i]; j < k; j++)
                // {
                    printf("%i", key); // TESTING
                // }
            }
        }
    }
    else
    {
        printf("Incorrect number of command-line arguments. Please enter two total\n");
        return 1;
    }
}


// printf("ciphertext: ");
// int k = argv[];
// string k = argv[];
// string num = "50";
// int i = atoi(num);
// userinput needs to be indentified by each character
// ciphertext = plaintext + key
// ^ciphertext = (userinput + key) % 26

