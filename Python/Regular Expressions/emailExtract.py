#To extract email ids from texts
# used library: Regular expressions- re

import re
text=input("Copy the text from your source file here to extract mail id's : \n")

# Enter the text:

emails=re.findall(r"[a-z0-9\.\-+_]+@[a-z0-9\.\-+_]+\.[a-z]+", text)
print(" Emails:\n",emails,"\n number of mail ids : ",len(emails))