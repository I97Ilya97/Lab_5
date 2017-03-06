#include "TPair.h"

void TPair::Set(int first, int second)
{
	First = first;
	Second = second;
}

double TPair::Calc()
{
	double multiply = First * Second;
	return multiply;
}

std::ostream& operator<<(std::ostream &out, const TPair &pair)
{
	out << pair.First << ' ' << pair.Second;
	return out;
}
