include<iostream>

int main()
{
	std::cout << "Good Morning!!!" << std::endl;

for(int i = 1; i < 10; i++)
	for(int j = i + 1; j < 10; j++)
		std::cout << i * j << " = " << i << " + " << j <<"  ";
	std::cout << std::endl;

	std::cin.get();
}

class Entity 
{
private:
	int m_Speed;
	std::string rank;

public:
	Entity()
	{
		m_Speed = 5;
		rank = "Beginner";
	}
}


class Entity1
{
private:
	int m_A ;
public:
	Entity1()
	{
		m_A = 5;
		std::cout << m_A << std::endl;	
	};

	~Entity1
	{
		std::cout << "Enttity is destructed !" << std::endl;
	};
	
};

/*
#include<iostream>

int main()
{
	std::cout << "Happy Dragon Boat Festival" << std::endl;

	std::cin.get();
}*/
//Happy Dragon Boat Festival to HEHEHE!!!!!