# CMakeLists.txt

####################################
# CMake requirements
####################################

cmake_minimum_required(VERSION 2.8)
project(xml_Reader_test_project LANGUAGES CXX DESCRIPTION "xml_Reader_test_project")

#enable_testing()
#include(CTest)

#############################################################
### Find requirements
#############################################################


#############################################################
### Include dir and files
#############################################################
#include_directories(myClasses myFunctions include)

set(my_includes
    xml_reader.h
#     "include/myInclude.h"
#     "include/class_protected_member.h"
#     "myFunctions/myFunc.h"
#     "myFunctions/addMyNo.h"
    )

set(my_cpps
    main.cpp
    xml_reader.cpp
#     "myClasses/myClass.cpp"
)


#add_subdirectory(myFunctions)
#############################################################
### Build Project
#############################################################
add_executable(${PROJECT_NAME} ${my_includes} ${my_cpps})

# # Link the dependent library
# target_link_libraries(${PROJECT_NAME} Functions_Lib)


#############################################################
### Define tests
#############################################################
