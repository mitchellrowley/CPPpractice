#include "common.h"
#include <cstdio>

/*
 * When returning (-1), the function below failed
 * to count the number of lines (either file missing, or
 * other reason).
 */
int W2_File_Line_Count(char* filepath)
{
	// Below, an array of characters
	// to store the strings we read,
	// into a variable, even if for now we
	// don't really care about those strings,
	// we need to grab them anyway
	char buffer[1024];


	FILE* file = NULL;
	file = fopen(filepath, "r");
	if (file != NULL)
	{
		std::cout << "The file can be opened" << std::endl;
		system("pause");
	}
	else {
		std::cout << "The file cannot be opened" << std::endl;
		return (-1);
	}
	// feof is a special function we use to
	// detect the end of a file.
	// while the end of a file has not been
	// reached, feof lets us know that by
	// return false.
	// So while the end of a file has not been
	// reached, Argh... Let's talk about that in
	// person

	int line_counter = 0;
	while (feof(file) == false) {
		fgets(buffer, 256, file);
		line_counter = line_counter + 1;
	}
	fclose(file);
	return line_counter;
}

void W2_File_Fill_Array_With_Content(char* filepath, double* arr )
{
	char buffer[1024];

	FILE* file = NULL;
	file = fopen(filepath, "r");

	int line_counter = 0;
	while (feof(file) == false) {
		fgets(buffer, 255, file);
		double value = atof(buffer);
		arr[line_counter] = value;
		line_counter = line_counter + 1;
	}
	fclose(file);
	return;
}
