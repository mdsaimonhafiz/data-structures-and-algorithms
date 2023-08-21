#!/usr/bin/python3
import socket
s = socket.socket()
s.connect(("192.168.1.101",22))
ans = s.recv(1024)
print(ans)
s.close
