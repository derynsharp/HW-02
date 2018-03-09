//
//  Phone_Directory.cpp
//  HW 2
//
//  Created by Madison Oliver on 2/18/18.
//  Copyright © 2018 Madison Oliver. All rights reserved.
//

#include "Phone_Directory.hpp"
#include <string>

std::string Phone_Directory::Directory_Entry::getName() const {return name;}
std::string Phone_Directory::Directory_Entry::getNumber() const {return number;}
void Phone_Directory::Directory_Entry::setNumber(const std::string & newNumber) {number = newNumber;}

int Phone_Directory::find(const std::string& name)
{
    //just here to create the code for remove_entry
    
    return -1;
}

std::string Phone_Directory::remove_entry(std::string& name)
{
    std::string currentNumber = " ";
    int inDirectory = find(name);
    if (inDirectory != -1)
    {
        size -= 1;
        name = " ";
        return name;
    }
    else
        return currentNumber;
}
