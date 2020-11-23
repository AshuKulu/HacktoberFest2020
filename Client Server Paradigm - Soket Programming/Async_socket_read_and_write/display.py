import socket
import subprocess 

IPV6=subprocess.getoutput("curl -6 icanhazip.com").split()[-1]

soc=socket.socket(socket.AF_INET6,socket.SOCK_DGRAM)
soc.bind((IPV6,8080))
count=0
while True:
	try:
		data,addr=soc.recvfrom(1024)
		count+=1
		print(data.decode(),addr,count,sep="\t",end="\r")
	except Exception as e:
		print(e)
		break
