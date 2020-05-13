#include "monty.h"

/**
 * main - function that execute a monty program that run the bytecodes line by
 * line from a  File.m
 * @argc: number of arguments 
 * @argv: name file
 * Return: 0 Success, if the number is different is error
 */
int main(int argc, char *argv[])
{
	FILE *input;
	char *buffer = NULL;
	size_t num_bytes, line;
	char *tok = NULL;

 if (argv[1])
    {
        input = fopen(argv[1], "r");
        if (!input)
        {
            fprintf(stderr,"Error: Can't open file %s\n", argv[1]);
            exit (EXIT_FAILURE);
        }
        //get size of the matrix
        for (line = 0; getline(&buffer, &num_bytes, input) != -1; line++)
		{
			tok = strtok(buffer, " \t\n");
			printf("%s\n", tok);
			tok = strtok(NULL, " \n");
        }
        free(buffer);
        fclose(input);
    } 
	return 0;
}
/**
 *_strlen - calculate the length of a string
 *@s: char pointer
 *
 *Return: the length of a string
 */
int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; s[lenght] != 0; lenght++)
	{}
	return (lenght);
}
