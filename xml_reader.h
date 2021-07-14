#ifndef XML_READER_H
#define XML_READER_H

#include<iostream>

// includes for Boost
#include<boost/property_tree/ptree.hpp>
using boost::property_tree::ptree;
#include<boost/property_tree/xml_parser.hpp>
#include<boost/foreach.hpp>

class xml_reader
{
public:
    // constructor
    xml_reader(const std::string filename);

    // destructor
    ~xml_reader();

    // Create an empty property tree object
    boost::property_tree::ptree my_ptree_obj;

private:
    // get file name
    int get_fileName(const std::string filename);

public:
    // set xml attributes
    void set_xmlAttributes();

    // print out xml attributes
    void print_xmlAttributes();
};

#endif // XML_READER_H
