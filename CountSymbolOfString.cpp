#include <iostream>
#include <string>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    std::string strLine;
    char chSym;
    std::cout << "input a string\r\n";
    std::getline(std::cin, strLine);
    std::cout << "input a symbol\r\n";
    std::cin >> chSym;
    unsigned int nLen = static_cast<unsigned int>(strLine.length());
    unsigned int c = 0;
    for (unsigned int i = 0; i < nLen; i++)
    {
        if (chSym == strLine[i])
            c++;
    }
    float fltPart = (static_cast<float>(c) / nLen) * 100;
    std::cout << "The symbol \"" << chSym << "\" occurs "
        << c << " times\r\n";
    std::cout << "The symbol \"" << chSym << "\" occupies "
        << fltPart << " % of the string \"" << strLine << "\"\r\n";
    std::cin.ignore();
    std::cin.get();
}
