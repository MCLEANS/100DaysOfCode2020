#! /bin/bash

user=$(whoami)
current_date=$(date +%Y-%m-%d_%H%M%S)
archive_name=/home/mcleans/Desktop/100DaysOfCode_2020/DAY3/bash_scripting/variables/${user}_catch_${current_date}.tar.gz
archive_directory=/home/${user}/Desktop/Catch/

tar -czf ${archive_name} ${archive_directory}

echo "copied components include:"
ls $archive_name
