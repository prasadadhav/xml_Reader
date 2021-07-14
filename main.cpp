#include "xml_reader.h"

int main(int argc, char** argv)
{
    // Check parameters
    if (argc <= 1)
    {
        std::cout << "Error: Invalid parameters!" << std::endl;
        std::cout << "Usage ./xml_Reader_test_project xmlFile" << std::endl;
        std::cout << std::endl;
        std::cout << "Parameter description" << std::endl;
        std::cout << "  configurationFile: Path and filename of xml file" << std::endl;
        return 1;
    }
    // Remove the first parameter
    argc--;

    // creating file name
    const std::string filename(argv[1]);



    return 0;
}
