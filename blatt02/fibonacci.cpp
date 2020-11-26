#include <iostream>
#include <cmath>

void fibonacci()
{
long num;
std::cout << "Bis wohin soll die Fibonacci-Folge gehen? " << std::flush;
std::cin >> num;
long f = 1;
long a = 0;
long b = 0;


for (long i = 0 ; i <= num ; ++i)
{
if (i > 2)
{
a = f;
f = b + f;
b = a;
std::cout << f << ", ";
}
else
std::cout << 0 << ", ";
}
}


int main(int argc, char** argv)
{
fibonacci();
return 0;
}
