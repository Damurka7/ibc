
#include <iostream>

#include <string>
#include <math.h> 
using namespace std;
int main()
{
	double p;
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double first, second, third;
	first = sqrt((x2 - x1) * (x2 - x1) + (y1 - y2) * (y1 - y2));
	second = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	third = sqrt((x2 - x3) * (x2 - x3) + (y3 - y2) * (y3 - y2));

	if (first + second > third && first + third > second && second + third > first) {
		p = (first + second + third) / 2;
		cout << sqrt(p * (p - first) * (p - second) * (p - third));
	}
	return 0;
}
