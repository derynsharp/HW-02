//
//  Phone_Directory.hpp
//  HW 2
//
//  Created by Madison Oliver on 2/18/18.
//  Copyright © 2018 Madison Oliver. All rights reserved.
//

#ifndef Phone_Directory_hpp
#define Phone_Directory_hpp

#include <stdio.h>
#include <string>

/** Specification file for the array-based phone directory. */
class Phone_Directory {
public:
    /** Construct an empty phone directory. */
    Phone_Directory();
    
    /** Destroy the phone directory when it is no longer needed. */
    ~Phone_Directory();
    
    /** Load the data file containing the directory, or establish a connection with the data source. @param source_name The name of the file (data source)
     with the phone directory entries. */
    void load_data(const std::string& source_name);
    
    /** Look up an entry. @param name The name of the person to look up
     @return The number associated with that person or an empty string if name is not in the directory */
    
    std::string lookup_entry(const std::string& name) const;
    std::string add_or_change_entry(const std::string& name, const std::string& number);
    std::string remove_entry(const std::string& name);
    
    /** Writes the contents of the directory to the data file. */
    void save();

private: // Insert the definition of the Directory_Entry class here.
        class Directory_Entry
        {
        private:
            std::string name;
            std::string number;
        public:
            //constructors
            Directory_Entry (std::string name, std::string number);
            Directory_Entry () {name = "Jake Long", number = "1234567";}
            
            //functions
            std::string getName() const;
            std::string getNumber() const;
            void setNumber(const std::string & newNumber);
        };
    // Private Functions /** Searches the array of directory entries for the name.
        int find(const std::string& name) const;
    
    /** Adds a new entry with the given name and number to the array of directory entries. @param name The name to be added @param number The number to be added*/
        void add(const std::string& name, const std::string& number);
    
    /** Removes the entry at the given index. @param index The index of the entry to be removed*/
        void remove_entry(int index);
    
    /** Creates a new array of directory entries with twice the capacity of the current one.*/
        void reallocate();
    
    /** The number of entries in the directory. */
        int size;
    /** The current capacity of the array. */
        int capacity;
    /** Pointer to the array containing the directory data. */
        Directory_Entry* the_directory;
    /** The name of the data file that contains the directory data. */
        std::string source_name;
    /** Boolean flag to indicate whether the directory was modified since it was either loaded or saved */
        bool modified;
};

#endif /* Phone_Directory_hpp */
