#include "TPair.h"

class TRectangled
	: public TPair
{
public:
	TRectangled() : TPair() {}

	TRectangled(int a, int b) : TPair(a, b) {}

	virtual ~TRectangled();

	virtual double Calc();
};
