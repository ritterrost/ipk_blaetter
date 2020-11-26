#include <iostream>
#include <cmath>
#include <string>


int main(int argc, char** argv)
{
double a;
std::cout << "a = " <<std::flush;
std::cin >> a;

double b;
std::cout << "b = " <<std::flush;
std::cin >> b;

double c;
std::cout << "c = " <<std::flush;
std::cin >> c;

if (a == 0 && b == 0)
{
	std::cout << "Es gibt unendlich viele Nullstellen!";
	return -1;
}

if (pow(b, 2) - 4 * a * c < 0) 
{
	std::cout << "Die Lösung ist komplex!";
	return -1;
}

double x;
x = ((-b) + (sqrt(pow(b, 2) - 4 * a * c))) / (2 * a);

double y;
y = ((-b) - (sqrt(pow (b, 2) - 4 * a * c))) / (2 * a);

std::cout << "Die Nullstellen befinden sich bei x: " << x << " und bei y; " << y << std::endl;
}
