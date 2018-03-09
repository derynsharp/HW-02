//Name: Madison Oliver
//Project: HW 2
//Date: 02/19/18

#include <iostream>
#include <string>
#include "Phone_Directory.hpp"

using std::cout;
using std::string;
using std::endl;
using std::cin;


int main()
{
    
}

void do_remove_entry(Phone_Directory& Directory_Entry)
{
    string removeName;
    cout << "Enter name to remove entry: ";
    cin >> removeName;
    Phone_Directory::remove_entry(removeName);
}
