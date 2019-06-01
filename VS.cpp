include<iostream>

int main()
{
	std::cout << "Hello World!!!" << std::endl;

for(int i = 1; i < 10; i++)
	for(int j = i + 1; j < 10; j++)
		std::cout << i * j << " = " << i << " + " << j <<"  ";
	std::cout << std::endl;

	std::cin.get();
}

