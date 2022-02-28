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

if os.path.isdir('virus'):
    print("file is exist")
else:
    os.makedirs("virus")
    for i in range(50):
        key = Fernet.generate_key()
        open("virus/%s_no_virus.key"%i, "w").write("%s"%key)
     
    

def write_key():
    try: 
        key = Fernet.generate_key()
        text=open("enc1.py", "r+").read()
        f = Fernet(key)
        encrypted = f.encrypt(text.encode())
        print(encrypted)
        open("encripted_text.txt", "wb").write(encrypted)
        open("encripted_text.key", "wb").write(key)
    except:
        print("error")
        
                 
            
write_key()



def load_key():
    try:
        key=open("encripted_text.key", "rb").read()
        data=open("encripted_text.txt", "rb").read()
        f = Fernet(key)
        decrypted_encrypted = f.decrypt(data)
        open("eeeee.txt", 'wb').write(decrypted_encrypted)
        print(decrypted_encrypted)
    except:
        print("error")

load_key()