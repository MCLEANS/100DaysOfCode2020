#! /bin/bash

user=$(whoami)
current_date=$(date +%Y-%m-%d_%H%M%S)
input=/home/${user}/Desktop/Catch/
output=./backup_${user}_${current_date}.tar.gz

tar -czf $output $input
echo "Archiving from  $input"
echo "archived as $output"