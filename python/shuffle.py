#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Sep 11 12:03:45 2019

@author: atuljain
"""

arr = list(map(int, input().split()))
l=[]
def shuffle(arr):
    for i in range(0,len(arr)):
        
        if(len(l)%2 == 0):
            l.append(min(arr))
            arr.remove(min(arr))
        elif(len(l)%2 != 0):
            l.append(max(arr))
            arr.remove(max(arr))
    print(l)
    
shuffle(arr)
