#!/bin/bash

echo "Below is execution of While loop\n"
i=1
while [[ $i -le 10 ]] ; do
   echo "$i"
  (( i += 1 ))
done

echo "Below is execution of for loop\n"
for i in {1..5}
do
    echo $i
done
