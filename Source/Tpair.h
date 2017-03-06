#include <iostream>

class TPair
{
protected:
	unsigned int First;
	unsigned int Second;

public:
	virtual ~TPair() {}

	TPair() : First(0), Second(0) {}

	TPair(int first, int second) : First(first), Second(second) {}

	void Set(int first, int second);

	virtual double Calc();

	friend std::ostream& operator << (std::ostream &out, const TPair &pair);
};

std::ostream& operator << (std::ostream &out, const TPair &pair);
