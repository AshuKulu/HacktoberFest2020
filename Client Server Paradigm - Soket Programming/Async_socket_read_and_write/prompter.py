import socket
import subprocess


IPV6=subprocess.getoutput("curl -6 icanhazip.com").split()[-1]

soc=socket.socket(socket.AF_INET6,socket.SOCK_DGRAM)

while True:
	try:
		input("SEnd prompt : ")
		soc.sendto(b"PROMPT",(IPV6,6969))
	except:
		break