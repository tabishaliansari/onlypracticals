import socket

s = socket.socket()
port = 12164

s.bind(('', port))

s.listen(5)
print('Socket is listening')

c, addr = s.accept()
print('Got connection from', addr)

c.send('Thank you for connecting'.encode())
c.close()
