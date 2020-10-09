#include <iostream>
#include <stdarg.h>

double srznach(double y, ...) {
	va_list args;
	va_start(args, y);
	double a = y;
	double sum = 0;
	int t = 0;
	while (a != -1.0) {
		sum += a;
		++t;
		a = va_arg(args, double);
	}
	va_end(args);
	sum /= t;
	return sum;
}

int main()
{
	std::cout << srznach(4.0, 5.0, 1.0, 3.0, 0.0, 6.0, 3.0, -1.0) << std::endl;
}
