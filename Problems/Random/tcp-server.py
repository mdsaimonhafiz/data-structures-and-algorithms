#!/usr/bin/python3
import socket
ip = "192.168.0.101"
port = 6996
buffer_size = 1024
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.bind((ip,port))
s.listen(1)
conn,addr = s.accept()
print("Connection adress: ",addr)
while 1:
    data_passed = conn.recv(buffer_size)
    if not data_passed: break
    print(data_passed)
    conn.send(data_passed)
conn.close

