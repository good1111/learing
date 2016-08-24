import errno
import os
import socket

class TCPSercer(object):
    def __init__(self):
        pass
    def listen(self,port,address=""):
        sockets=bind_sockets(port,address=address)
        self.add_sockets(sockets)
    def add_sockets(self,sockets):
        pass
