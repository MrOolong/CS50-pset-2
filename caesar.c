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
        userinput = get_string(); // plaintext=userinput
        printf("ciphertext: ");
        int n = strlen(userinput);

        if(userinput != NULL)
        {
            for(int i = 0; i < n; i++)
            {
                if(isalpha(userinput[i])) // checks if the letters are in the alphabet
                {
                    if (isupper(userinput[i]))
                    {
                        printf("%c", (userinput[i] - 'A' + key) % 26 + 'A');
                    }
                    else if (islower(userinput[i]))
                    {
                        printf("%c", (userinput[i] - 'a' + key) % 26 + 'a');
                    }
                    else
                    {
                        printf("%c", userinput[i]);
                    }
                }
            }
        }
    }
    else
    {
        printf("Usage: ./caesar k\n");
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

