import socket

s = socket.socket()
print("Socket Successfully Created")

port=12164

s.bind(('', port))
print("Socket binded to %s"%{port})

s.listen(5)
print("Socket is listening")

while True:
    c, addr = s.accept()
    print('Got connection from', addr)
    
    c.send('Thank you for connecting'.encode())
    c.close()
    
    break
