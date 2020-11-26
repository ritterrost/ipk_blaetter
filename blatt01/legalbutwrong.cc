#include <iostream>

int main(int argc, char** argv)
{
// calculate the sum of all numbers from 1 to n 
int sum = 0;
for (int i = 1 ; i <= 10 ; i = i + 1){ 
sum = sum + i;
}
std::cout << sum << std::endl;
return 0;
}
