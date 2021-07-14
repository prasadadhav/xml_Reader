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

// print out xml attributes
void xml_reader::print_xmlAttributes()
{
    // here we print test attributes
    int i = 0;
    BOOST_FOREACH(ptree::value_type & child, xml_reader::my_ptree_obj.get_child("localinfo.player_info"))
    {
        std::cout << " " << std::endl;
        std::cout << i << std::endl; i++;
        std::cout << "Node name: " << child.first << std::endl;
        std::cout << "Pass value: " << child.second.get<std::string>("<xmlattr>.pass") << std::endl;
        std::cout << "isSave value: " << child.second.get<int>("<xmlattr>.isSave") << std::endl;
        std::cout << "isLastLogin value: " << child.second.get<int>("<xmlattr>.isLastLogin") << std::endl;
        std::cout << "account value: " << child.second.get<std::string>("<xmlattr>.account") << std::endl;
    }
}
