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
    if (argc == 2)
    {
        for (int h = 0; h < strlen(argv[1]); h++)
        {
            if (isalpha(argv[1][h]) == false)
            {
                printf("Usage: ./vigenere k \n");
                return 1;
            }
        }

        k = argv[1];// Step 1 - Get key from command line argument
        key = strlen(k);
        // printf("Key length = %d\n", key); Test key length
        // key = atoi(k);// Step 2(CAESAR) - Turn key into integer - necessary for vigenere?

        printf("plaintext: "); // Step 3 - Prompt user for plain text
        userinput = get_string(); // cs50plaintext=userinput
        printf("ciphertext: ");
        int n = strlen(userinput); // storing the length of userinput
        int counter = -1;

        if (userinput != NULL)
        {
            for (int i = 0; i < n; i++)
            {
                if (isalpha(userinput[i])) // checks if the letters are in the alphabet
                {
                    counter++;
                    int j = counter % key;
                    if (isupper(userinput[i]))
                    {
                        if (isupper(k[j]))
                        {
                            printf("%c", (userinput[i] + k[j]) % 26 + 'A'); // printing uppercase
                        }
                        else
                        {
                            printf("%c", (userinput[i] + k[j] - 32) % 26 + 'A'); // combination check
                        }

                    }
                    else if (islower(userinput[i]))
                    {
                        if (islower(k[j]))
                        {
                            if (((userinput[i] + k[j]) % 26) + 85 < 97)
                            {
                                printf("%c", ((userinput[i] + k[j]) % 26) + 111);
                            }
                            else
                            {
                                printf("%c", ((userinput[i] + k[j]) % 26) + 85); // printing lowercase
                            }
                        }
                        else
                        {
                            if (((userinput[i] + k[j]) % 26) + 85 < 97)
                            {
                                printf("%c", (((userinput[i] + k[j]) + 32) % 26) + 111);
                            }
                            else
                            {
                                printf("%c", (((userinput[i] + k[j]) + 32) % 26) + 85);
                            }
                        }
                    }
                }
                else
                {
                    printf("%c", userinput[i]);
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Usage: ./vigenere k \n"); // rule if user doesn't enter correct command-line arguments
        return 1;
    }
}