import socket
from time import sleep
import pyautogui
con=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
con.connect(("192.168.43.174",4444))
print("connected")
while(True):
    msg=input("enterdata")
    msg=msg.encode()
    con.send(msg)
    
    
