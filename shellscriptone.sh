#!/bin/bash

# The above command is called Shebang

echo "Today is " `date`

echo -e "\nenter the path to directory"
read the_path

echo -e "\n your path has the following files and folders: "
ls $the_path
