#ifndef INSTRUCTION_HPP
#define INSTRUCTION_HPP

#include <vector>
#include <iostream>

class	Instruction
{
private:
	char	_c;

public:
	Instruction(void);
	Instruction(char c);
	Instruction(const Instruction &cpy);
	~Instruction(void);
	Instruction& operator = (const Instruction &old);

	void	execute(std::vector<char>::iterator &x,
					std::vector<Instruction>::iterator &it,
					std::vector<Instruction>::iterator &ite);
	char	getIn(void);
};

#endif