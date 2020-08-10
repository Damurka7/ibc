// IBC2020.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include <string>
#include <math.h> 
using namespace std;
int main()
{
	int x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double first = sqrt((x2-x1)*(x2-x1)-(y1-y2)*(y1-y2));
	double second = sqrt((x3 - x1) * (x3 - x1) - (y3 - y1) * (y3 - y1));
	double third = sqrt((x2 - x3) * (x2 - x3) - (y3 - y2) * (y3 - y2));
	if (first + second > third && first+third>second && second+third>first) {
		cout << "exists";
	}
}
