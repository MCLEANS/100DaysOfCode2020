#! /bin/bash

user=$(whoami)
dashboard=/home/${user}/Desktop/Archive/PROJECTS/Geometry_Rendering

cd $dashboard


echo "-------compiling--------"
make all
echo "--------running----------"
make run
echo "-------cleaning---------"
make clean