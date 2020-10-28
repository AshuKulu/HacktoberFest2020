#!/bin/bash
#ssh spam python script

for port in {9000..13999}
do
    printf "$port/n"
    ssh -o StrictHostKeyChecking=no -p $port 10.10.10.10
done