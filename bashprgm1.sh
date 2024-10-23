#!/bin/bash

#Ask Username
#Set the correct path
#Create a folder with username
#Move inside the new folder
#Create a text file with your name

echo -e "\nEnter your username:"
read yourname

echo -e "\nenter the path to create your directory"
read the_path

cd $the_path
mkdir $yourname
cd $yourname

touch "$yourname.txt"

echo "\nDirectory and text file created successfully, check your computer"
