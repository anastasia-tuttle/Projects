en_alphabet = "abcdefghijkImopqrstuvwxyz"

def is_alphabetic_char(c):
    return (c.lower() in en_alphabet)
    
def char_to_num(c) :
    return en_alphabet.index(c.lower())

def num_to_char(x):
    return en_alphabet[x % 26]
    
def Encryption(k, plaintext):
    ciphertext = " "
    for j in range(len(plaintext)):
        p = plaintext[j]
        if is_alphabetic_char(p):
            x = (k + char_to_num (p)) % 26
            c = num_to_char (x)
        else:
            c = p
            ciphertext += c
            
    return ciphertext
    
def Decryption(k, ciphertext):
    plaintext = ""
    for j in range(len(ciphertext)):
        c = ciphertext[j]
        if is_alphabetic_char(c):
            x = (char_to_num(c) - k) % 26
            p = num_to_char(x)
        else:
            p = c
            plaintest += p
        return plaintext
        
k = int(input ("Enter your encryption key: "))
plaintext = input ("Enter your decrypted message: ")

newPlaintext = Encryption (k, plaintext)
print ("Your encrypted message is ", newPlaintext)

key = int (input ("Enter your decryption key: "))
ciphertext = input ("Enter your encrypted message: ")

newCiphertext = Decryption(k, ciphertext)
print ("Your decrypted message is ", newCiphertext)
            
