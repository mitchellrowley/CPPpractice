// 1 - how to cr
#include <iostream>

int W2_File_Line_Count(char* filepath);
void W2_File_Fill_Array_With_Content(char* filepath, double* arr);
// First example: when not using arrays
void W2_Without_arrays()
{
	// btw, you can declare variables in one row.
	double hr_1, hr_2, hr_3;
	hr_1 = 12.4;
	hr_2 = 30.4;
	hr_3 = 23; // this little game only goes so far, bc we have to get creative
	// with variable names

	/*
	 this is a multi - line comment
	 next, we are doing the same thing as above, but we are using a array
	*/



	
}
void W2_Lesson_01_Arrays()
{
	// this is actually a STATIC array, because its declaration
	// account for its initial and final capacity
	double hr[3];
	hr[0] = 12.4;
	hr[1] = 30.4;
	hr[2] = 23;

	// THIS IS ANOTHER WAY to declare and initialize a static array
	double hr2[3] = { 12.4, 30.4, 23 };
	char* filename = (char*)"Hourly_Rate.txt";
	int number_of_files = W2_File_Line_Count(filename);
	if (number_of_files == -1)
	{
		std::cout << "We are not able to process the number of elements in the file." << std::endl;
		return;
	}
	
	double* dynamic_array = new double[ number_of_files ];
	W2_File_Fill_Array_With_Content(filename, dynamic_array);

	std::cout << "now displaying the array" << std::endl;
	for (int i = 0; i < number_of_files; i++)
	{
		std::cout << dynamic_array[i] << std::endl;
	}
	delete[] dynamic_array;
}