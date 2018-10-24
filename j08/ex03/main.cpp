
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

#include "Instruction.hpp"

#define PRINT(x) std::cout << x << std::endl

void	mindopen(char *fileName)
{
	std::ifstream	fd(fileName);
	std::vector<Instruction> doIt;
	if (fd.is_open())
	{
		char	c;
		std::vector<char> valid;
		valid.push_back('>');
		valid.push_back('<');
		valid.push_back('+');
		valid.push_back('-');
		valid.push_back('.');
		valid.push_back(',');
		valid.push_back('[');
		valid.push_back(']');
		while (fd.get(c))
		{
			if (std::find(valid.begin(), valid.end(), c) != valid.end())
			{
				Instruction *tmp = new Instruction(c);
				doIt.push_back(*tmp);
			}
		}
		fd.close();
		
		std::vector<Instruction>::iterator	it = doIt.begin();
		std::vector<Instruction>::iterator	ite = doIt.end();
		
		std::vector<char> brainfuck(4096, 0);
		std::vector<char>::iterator	brainptr = brainfuck.begin();
		try
		{
			while (it != ite)
			{
				it->execute(brainptr, it, ite);
				it++;
			}
		}
		catch (std::exception &e)
		{
			PRINT(e.what());
		}
	}
	else
		throw std::runtime_error("unable to open file");
}

int		main(int ac, char **av)
{
	if (ac == 1)
		PRINT("usage: ./mindopen [files...]");
	else
	{
		for (int i = 1;i < ac;i++)
		{
			try { mindopen(av[i]); }
			catch (std::exception &e)
			{ PRINT(e.what()); }
		}
	}
	return (0);
}