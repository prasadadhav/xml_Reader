//int main(int argc, char** argv)
////int main()
//{
//    // Check parameters
//    if (argc <= 1)
//    {
//        std::cout << "Error: Invalid parameters!" << std::endl;
//        std::cout << "Usage ./xml_Reader_test_project xmlFile" << std::endl;
//        std::cout << std::endl;
//        std::cout << "Parameter description" << std::endl;
//        std::cout << "  configurationFile: Path and filename of xml file" << std::endl;
//        return 1;
//    }
//    // Remove the first parameter
//    argc--;

////    // First parameter must the xml file
//    const std::string filename(argv[1]);
//    if (filename.length() == 0)
//    {
//        std::cout << "Error: No file name and path provided!" << std::endl;
//        return 0;
//    }

//    // Create an empty property tree object
//    ptree pt;

//    // Load the XML file into the property tree. If reading fails
//    // (cannot open file, parse error), an exception is thrown.
//    read_xml(filename, pt);
////    read_xml(argv[1], pt);

//    int i = 0;
//    BOOST_FOREACH(ptree::value_type & child, pt.get_child("localinfo.player_info"))
//    {
//        cout << " " << endl;
//        cout << i << endl; i++;
//        cout << "Node name: " << child.first << endl;
//        cout << "Pass value: " << child.second.get<string>("<xmlattr>.pass") << endl;
//        cout << "isSave value: " << child.second.get<int>("<xmlattr>.isSave") << endl;
//        cout << "isLastLogin value: " << child.second.get<int>("<xmlattr>.isLastLogin") << endl;
//        cout << "account value: " << child.second.get<string>("<xmlattr>.account") << endl;
//    }

//    return 0;
//}
