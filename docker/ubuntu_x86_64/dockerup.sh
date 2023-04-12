#!/bin/bash

echo " "
echo "	Setting up rasta docker 
	   gdb and networking"

echo " "

sudo docker system prune -a ; 
sudo docker build -t rasta . && 
sudo docker run -it rasta bash

