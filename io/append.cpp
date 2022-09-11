#include <fstream>
#include <iostream>
#include <string>

// commenting out to see how many uses of namespace in this program
// using namespace std;

int main()
{
    std::string info = "\n\tThe Ballad of Reading Gaol";
    info.append("\n\t\t\tOscar Wilde 1898");

    std::ofstream writer("poem.txt", std::ios::app);
    if (!writer)
    {
        std::cout << "Error opening file for output" << std::endl;
        return -1;
    }
    writer << info << std::endl;
    writer.close();

    return 0;
}
