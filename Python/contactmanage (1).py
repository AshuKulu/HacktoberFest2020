#!/usr/bin/env python
# coding: utf-8

# In[1]:


def new_name():
    numbers=[]
    names=[]
    nam1= input("enter name")
    num= int(input("enter number"))
    name=names.append(nam)
    number=numbers.append(num)
    return name
    


# In[ ]:


new_name()


# In[ ]:


def new_name():    
    numbers=[]
    names=[]
    names.append(input("enter name"))
    num= int(input("enter number"))
    numbers.append(num)
    return names
    return numbers


# In[15]:


def newuser():
    global users
    users=['shrey']
    global password
    password=['hola']
    users.append(input('enter your user name'))
    password.append(input('enter the exces password'))
    
    
        


# In[ ]:





# In[22]:


global users
   users=['shrey']
   global password
   password=['hola']


# In[19]:


newuser()


# In[20]:


len(users)


# In[4]:


print('Hello Welcome To All In One Management System')
goti= True



users=['shrey']

password=['hola']

numbers=[]
names=[]

leng=len(users)+1

def usercheck():
   
    a=0
    while a<leng:
        if input('enter user id') ==users[a]: 
             if input('enter passcode')== password[a]:
                return 'ok'
        else:
            print('Access Denied ')
    a+=1
    
    
    
    
def newuser():
    
    password=['hola']
    users.append(input('enter your user name'))
    password.append(input('enter the exces password'))
    
    
            
    
    
    
def newname():    
    
    names.append(input("enter name"))
    num=int(input("enter number"))
    numbers.append(num)
    
    
    

    
    
def again():
    if input('if you want to run again press y').upper()=='Y':
        return shrey()
    else:
        print ('THANKS!!!! Come back again')
        
        
        
def shrey():

    if input('do you have an account enter yes or no').upper()=='YES':
        if usercheck()=='ok':
            if input('to enter a new number to contact enter ...new... else anything to view the list of contacts').upper()=='NEW':
                newname()
            else:
                x=0
                while x<leng:
                    print("{} ".format(names))
                    print("{} ".format(numbers))
                    x+=1
        else:
            for m in range(0,20):
                print('ACCESS DENIED')
        
            return shrey()
    

        
    
    else:    
             newuser()
             return shrey()
            
            
            
   

    
    


shrey()
again()
           
     
    
    
    
    
    
    
    
    


# In[3]:


shrey()
again()


# In[ ]:




