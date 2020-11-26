#include <iostream>
#include <cmath>

namespace power {
	
int fast_recursive(double q, int n)
{
	if (n)
	{
			if (n % 2)
			{
				return q * fast_recursive(q * q, n/2);
			}
			else
			{
				return 1 * fast_recursive(q * q, n/2);
			}
	}
	else
	return 1;
}

//Aufgabe 3 a) + b)
double root_iterative(double q, double n, int steps)
{
	double a = 1;
	
	for (int i = 0; i < steps; ++i)
	{
			a = a + 1/n * ((q/(fast_recursive(a, n-1))) - a);
	}
	
	return a;
}

//Aufgabe 3 c)
void test_root(double q, double n, int steps)
{	
	double est = root_iterative(q, n, steps);
	double pot = fast_recursive(est, n);
	std::cout << "q ist: " << q << "\n" << "n ist: " << n << "\n"
	<< "Anzahl der steps: " << steps << "\n" << "Differenz der Näherung: " 
	<< q - pot << "\n";
}

} // end namespace power	


int main(int argc, char** argv)
{
	double q, n, steps = 0;
	
	std::cout << "Aus welcher Zahl willst du die Wurzel ziehen?: " << std::flush;
	std::cin >> q;

	std::cout << "Die wievielte Wurzel?: " << std::flush;
	std::cin >> n;
	
	std::cout << "Wie viele steps: " << std::flush;
	std::cin >> steps;
	
	if (n < 0)
	{
		std::cout << "Bitte eine natürliche Zahl als Exponent eingeben!" << std::endl;
		return 1;
	}
	
	std::cout <<  "Die Näherung der Wurzel ist: " << 
	power::root_iterative(q, n, steps) << "\n" << std::endl;
	power::test_root(q, n, steps);
	return 0;
}
