#include <include/foo.h>

double foo(int ignored)
{
	double ret = 19;
	double i = ignored;
	
	if (i > 0) {
		if (i < 10) {
			ret += (i / 10);
		} else if (i < 100) {
			ret += (i / 100);
		} else {
			ret += .25;
		}
	}
	return ret;
}

