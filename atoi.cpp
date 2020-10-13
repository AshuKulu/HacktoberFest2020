//Program to covert integer in string to integer.
//Written by Vivek Ray
#include<iostream>
#include<string.h>
using namespace std;
class Solution {
public:
    int myAtoi(string str) {
        int len=str.size(),j=0,num=1,n=0;
        long int res=0;
        try
        {
        while(j<len){
          if(str[j]!=' '&&int(str[j])>47 &&int(str[j])<58)
        {   
             n=1;
              int temp=int(str[j])-48;
              
              res=((num==45)?(((res<214748364)||(res==214748364&&temp<8))?(res*10+temp):(2147483648)):(((res<214748364)||(res==214748364&&temp<8))?(res*10+temp):(2147483647)));
         
              
        }  
            else if(46==int(str[j]))
            {throw res;
                
            }
            else if(str[j]=='-'||str[j]=='+')
            {
                if(num<40 && n!=1)
                num=int(str[j]);
                 else throw res;       
            }
            else if(32==int(str[j])){if(n==1||num>1) throw res; } 
            else if((57<int(str[j])||48>int(str[j]))) 
            {
                res=(res>0)?res:0;
                throw res;
            }
           j++;
            
        }
        }
        catch(long int tem){
             res=tem;
            
        }
        num=(num==45)?-1:1;
        res=res*num;
        return  (res);
        
        
    }
};
/*
Input: str = "   -42"
Output: -42
*/
