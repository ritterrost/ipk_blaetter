#include <iostream>

void collatz()
{
int num;
std::cout << "Geben sie eine Nummer ein: " << std::flush;
std::cin >> num;

while (num != 1 and num != 0 and num != -1 and num != -5 and num != -17) 
{
if (num % 2 == 0)
{
	num = num / 2;
}
else
{
num = num * 3 + 1;
}
}
std::cout << "Das Ergebnis ist: " << num << std::endl;
}

int main(int argc, char** argv)
{
collatz();
return 0;
}
