#!/usr/bin/python3
def uppercase(str):
    for i in range(len(str)):
        ascii_let = ord(str[i])
        if 97 <= ascii_let <= 122:
            ascii_let -= 32
        print('{:c}'.format(ascii_let), end='')
    print()
