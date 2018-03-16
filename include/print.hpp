#include <string>
#include <fstream>
#include <iostream>
//!
//!прототип функции print для стандартного потока вывода
//!
void print(const std::string& text, std::ostream& out = std::cout);
//!
//!прототип функции print для вывода из файла
//!
void print(const std::string& text, std::ofstream& out);
