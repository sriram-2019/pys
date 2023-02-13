import socket
from time import sleep
import pyautogui
import threading
con=socket.socket(socket.AF_INET,socket.SOCK_STREAM)
con.bind(("192.168.43.174",4484))
print("waitiong for connec")
con.listen(0)
con,add=con.accept()
print("econetted")
while(True):
    msg=input("enter a mes")
    msg=msg.encode()
    con.send(msg)


    
