//#include <iostream>

//#include <stdio.h>
// below is just a function. This shows that C++ does not HAVE to be OOP



extern int g_variable;

int main()
{
	int wer = foo();
	printf("Hi\r\n");
	//int a = 2;
	//double double_num = 2.0;
	
	double final_gpa = 0;
	{
		double gpa = 3.0;
		double modded_gpa = gpa * 1.2;
		final_gpa = modded_gpa;
	}

	double gpa = 0;

	g_variable = 5;
	//double cout = 4;
	cout << "the value of g_variable = " << g_variable;
	//std::cout << "Hi" << std::endl;
	return 0;
}
