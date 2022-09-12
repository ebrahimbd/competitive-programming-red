#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 20:15:46 2022

@author: ebrahim
"""

#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Feb 28 19:30:55 2022

@author: ebrahim
"""

from cryptography.fernet import Fernet

import os


def write_key():
    key = Fernet.generate_key()
    file=open("programming context info.xlsx", "rb").read()
    f = Fernet(key)
    encrypted = f.encrypt(file)
    print(encrypted)
    open("encripted_text.txt", "wb").write(encrypted)
    open("encripted_text.key", "wb").write(key)

                                   
write_key()

def load_key():
    key=open("encripted_text.key", "rb").read()
    data=open("encripted_text.txt", "rb").read()
    f = Fernet(key)
    decrypted= f.decrypt(data)
    open("ebrahim.xlsx", 'wb').write(decrypted)
    print("Sucessfully decripred ebrahim")

load_key()