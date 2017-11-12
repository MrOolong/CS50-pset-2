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
        userinput = get_string(); // cs50plaintext=userinput
        printf("ciphertext: ");
        int n = strlen(userinput); // storing the length of userinput

        if(userinput != NULL)
        {
            for(int i = 0; i < n; i++)
            {
                if(isalpha(userinput[i])) // checks if the letters are in the alphabet
                {
                    if (isupper(userinput[i]))
                    {
                        printf("%c", (userinput[i] - 'A' + key) % 26 + 'A'); // printing uppercase
                    }
                    else if (islower(userinput[i]))
                    {
                        printf("%c", (userinput[i] - 'a' + key) % 26 + 'a'); // printing lowercase
                    }
                    else
                    {
                        printf("%c", userinput[i]);
                    }
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Usage: ./caesar k\n"); // rule if user doesn't enter correct command-line arguments
        return 1;
    }
}