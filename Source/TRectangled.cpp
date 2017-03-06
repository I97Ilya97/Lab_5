#include "TRectangled.h"

TRectangled::~TRectangled()
{

}

double TRectangled::Calc()
{
	double length = sqrt(First * First + Second * Second);
	return length;
}
