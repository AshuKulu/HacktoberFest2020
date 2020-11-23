import socket
import threading
import ctypes
import time
import subprocess
import os
print(os.getpid())

IPV6=subprocess.getoutput("curl -6 icanhazip.com").split()[-1]


soc=socket.socket(socket.AF_INET6,socket.SOCK_DGRAM)
soc.bind((IPV6,6969))
soc.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)
soc.settimeout(0.1)

flag=[False] # Item to be sent ready
flag_id=id(flag)

def serve():
	global flag
	try:
		while True:
			assert flag!=[None]
			try:
				if(flag==[False]):
					data,addr=soc.recvfrom(1024)
					print(data)
			except:
				pass

	except AssertionError:
		pass


thread=threading.Thread(target=serve)
thread.start()


while True:
	try:
		if(flag==[False]):
			flag[0]=True
			soc.sendto(b"Data",(IPV6,8080))
			flag[0]=False
			time.sleep(0.1)
	except:
		print("INTERRUPT")
		flag[0]=None
		break



