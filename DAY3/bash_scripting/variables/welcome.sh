#! /bin/bash

greeting="Welcome"
user=$(whoami)
day=$(date +%A)

echo "$greeting $user you are running the bash version $BASH_VERSION"
echo "today is $day"