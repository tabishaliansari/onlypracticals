import socket

s = socket.socket()

port = 12164

s.connect(('localhost', port))

print(s.recv(1024).decode())
s.close()

# Run Server-socket.py in one terminal
# Run telnet localhost 12164 in another terminal, we can also run the client-socket.py script
