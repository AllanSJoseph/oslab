#!/bin/bash

#Ask user
#after that welcome user
#ask for directory
#ask how many students
#ask name of each student
#create a folder for teacher and create folder for each student 

echo -e "\nEnter your username: "
read yourname

echo -e"\n Welcome $yourname"

echo -e "Enter the path to create required directories:"
read yourpath

cd $yourpath
mkdir $yourname

echo -e "Enter the number of students"
read no

i=1

while [[ $i -le 10 ]] ; do
	mkdir "student$i"
	(( i += 1))
done
  
