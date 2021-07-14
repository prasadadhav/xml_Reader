#include "xml_reader.h"

// constructor
xml_reader::xml_reader()
{
    std::cout << "Created xml read class object @PSA" << std::endl;
}


// destructor
xml_reader::~xml_reader()
{
    std::cout << "destroyed xml read class object @PSA" << std::endl;
}

// get file name
int xml_reader::get_fileName(const std::string filename)
{
    // Here we implement get file name
    // we assigne file name to a char variable
    // this can then be used by other members for further parsing, processing of the file

    if (filename.length() == 0)
    {
        std::cout << "Error: No file name and path provided!" << std::endl;
        return 0;
    }
    // Load the XML file into the property tree. If reading fails
    // (cannot open file, parse error), an exception is thrown.
    boost::property_tree::xml_parser::read_xml(filename, my_ptree_obj);
    return 1;
}

// set xml attributes
void xml_reader::set_xmlAttributes()
{
    // here we set xml attributes to vars
    std::cout << "WARNING: Not yet implemented " << std::endl;
}

}
