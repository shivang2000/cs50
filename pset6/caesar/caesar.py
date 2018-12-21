import sys
if len(sys.argv) == 2:
    key = eval(sys.argv[1])
    plaintext = input("plaintext: ")
    ciphertext = list()
    for i in range(len(plaintext)):
        if (ord(plaintext[i]) >= 97 and ord(plaintext[i]) <= 122):
            ciphertext.append(chr(((((ord(plaintext[i]) - 97 ) + key ) % 26 ) + 97)))
        elif (ord(plaintext[i]) >= 65 and ord(plaintext[i]) <= 90):
            ciphertext.append(chr(((((ord(plaintext[i]) - 65 ) + key ) % 26 ) + 65)))
        else :
            ciphertext.append(plaintext[i])
    print("chipertext: ",''.join(ciphertext))
else :
    print("usage is : python3 caesar.py n")