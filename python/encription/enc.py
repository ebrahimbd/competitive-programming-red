#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 19:30:55 2022

@author: ebrahim
"""

from cryptography.fernet import Fernet



def write_key():
    key = Fernet.generate_key()
    message = "some secret message".encode()
    f = Fernet(key)
    encrypted = f.encrypt(message)
    ebra=open("ebra", "wb") 
    ebra.write(encrypted)
    ebrak=open("ebra.key", "wb") 
    ebrak.write(key)
             
        
write_key()


def load_key():
    key=open("ebra.key", "rb").read()
    data=open("ebra", "rb").read()
    f = Fernet(key)
    decrypted_encrypted = f.decrypt(data)
    print(decrypted_encrypted)

load_key()