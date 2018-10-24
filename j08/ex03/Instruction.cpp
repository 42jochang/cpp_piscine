
#include <stdexcept>
#include <cstdio>
#include "Instruction.hpp"

Instruction::Instruction(char c) : _c(c) { }
Instruction::Instruction(const Instruction &cpy) { *this = cpy; }
Instruction::~Instruction(void) { }
Instruction&	Instruction::operator = (const Instruction &old)
{
	this->_c = old._c;
	return (*this);
}

void	Instruction::execute(std::vector<char>::iterator &x,
							std::vector<Instruction>::iterator &it,
							std::vector<Instruction>::iterator &ite)
{
	int 	brackets = 1;
	switch (_c) {
		case '>':	x++;
					break;
		case '<':	x--;
					break;
		case '+':	(*x)++;
					break;
		case '-':	(*x)--;
					break;
		case '.':	std::cout << *x;
					break;
		case ',':	*x = getchar();
					break;
		case '[':	if (*x == 0)
					{
						while (brackets != 0 && it != ite)
						{
							it++;
							if (it->getIn() == '[')
								brackets++;
							if (it->getIn() == ']')
								brackets--;
						}
						if (it == ite)
							throw std::logic_error("no matching ]");
					}
					break;
		case ']':	if (*x != 0)
					{
						while (brackets != 0 && it != ite)
						{
							it--;
							if (it->getIn() == ']')
								brackets++;
							if (it->getIn() == '[')
								brackets--;
						}
						if (it == ite)
							throw std::logic_error("no matching [");
					}
					break;
		default:	break;
	}
}

char	Instruction::getIn(void)
{
	return (_c);
}
