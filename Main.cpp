#include <iostream>
#include <string>

int main()
{
    std::locale::global(std::locale("RU"));
    std::wstring test;
    std::getline(std::wcin, test);
    std::wcout << test;
    std::wcin.get();
}