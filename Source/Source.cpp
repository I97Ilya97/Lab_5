#include "TRectangled.h"

int main()
{
	TPair pair(128, 8);
	std::cout << "pair : \n" << pair << std::endl << std::endl <<
		"First * Second = \n" << pair.Calc() << std::endl << std::endl;

	TRectangled triangle(3, 4);
	std::cout << "triangle : \n" << triangle << std::endl << std::endl <<
		"square = " << triangle.Calc() << std::endl << std::endl;

	system("pause");
}
