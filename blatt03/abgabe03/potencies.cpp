#include <iostream>
#include <cmath>

namespace power {
	
// Aufgabe 2a)
int iterative (int q, int n) 
{
	int erg = q;

	if (n)
	{
		for (int i = 1; i < n; i++) 
		{
			erg = erg * q;
		}
	}
	
	else
	{	
		return 1; 
	}
	
	return erg;

}

// Aufgabe 2b)
int recursive(int q, int n)
{
	if (n) 	
	{
		return recursive(q, n - 1) * q;
	}
	
	else
	{	
		return 1; 
	}
}

// Aufgabe 2c)
int fast_recursive(int q, int n)
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

} // end namespace power	

int main(int argc, char** argv)
{
	int q, n;
	std::cout << "Welche Zahl willst du potenzieren?: " << std::flush;
	std::cin >> q;

	std::cout << "was ist der Exponent?: " << std::flush;
	std::cin >> n;
	
	if (n < 0)
	{
		std::cout << "Bitte eine natürliche Zahl als Exponent eingeben!" << std::endl;
		return 1;
	}

	std::cout <<  " Ergebnis iterativ: " << power::iterative(q, n) << std::endl;
	std::cout <<  " Ergebnis rekursiv: " << power::recursive(q, n) << std::endl;
	std::cout <<  " Ergebnis effizient rekursiv: " << power::fast_recursive(q, n) << std::endl;

	return 0; 
}
