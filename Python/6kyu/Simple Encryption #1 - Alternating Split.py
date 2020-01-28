# =============================================================================
# Simple Encryption #1 - Alternating Split
# 
# For building the encrypted string:
# Take every 2nd char from the string, then the other chars, that are not every 2nd char, and concat them as new String.
# Do this n times!
# 
# Examples:
# 
# "This is a test!", 1 -> "hsi  etTi sats!"
# "This is a test!", 2 -> "hsi  etTi sats!" -> "s eT ashi tist!"
# Write two methods:
# 
# def encrypt(text, n)
# def decrypt(encrypted_text, n)
# For both methods:
# If the input-string is null or empty return exactly this value!
# If n is <= 0 then return the input text.
# 
# This kata is part of the Simple Encryption Series:
# Simple Encryption #1 - Alternating Split
# Simple Encryption #2 - Index-Difference
# Simple Encryption #3 - Turn The Bits Around
# Simple Encryption #4 - Qwerty
# 
# Have fun coding it and please don't forget to vote and rank this kata! :-)
# =============================================================================

def decrypt(encrypted_text, n):
    if encrypted_text is None:
        return None
    if n <= 0:
        return encrypted_text
    for i in list(range(0,n)):
        i = 0
        temp = list()
        for x in list(encrypted_text)[:int(len(encrypted_text)/2)]:
           temp.append(list(encrypted_text)[int(len(encrypted_text)/2):][i] + x)
           i += 1
        if len(list(encrypted_text)) % 2 > 0:
            temp.append(list(encrypted_text)[int(len(encrypted_text)/2):][-1])
        encrypted_text = "".join(temp)
    return encrypted_text


def encrypt(text, n):
    if text is None:
        return None
    if n <= 0:
        return text
    for i in list(range(0,n)):
        text = list(text)[1::2] + list(text)[0::2]
    return "".join(text)