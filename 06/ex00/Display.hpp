#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include <string>
#include <iostream>

void	parse(std::string);
void	fromChar(char src);
void	fromInt(int	src);
void	fromDouble(float src);
void	fromNaN(std::string src);
int		isChar(std::string);
int		isInt(std::string src);
int		isDouble(std::string src);
int		isFloat(std::string src);
int		isNaN(std::string src);
void	noValid();

#endif