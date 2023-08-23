#include <stdlib.h>
#include <stdio.h>
#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	char *content;
	FILE *input_file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	input_file = fopen(argv[1], "r");
	bus.file = input_file;
	if (!input_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, input_file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(input_file);
return (0);
}
