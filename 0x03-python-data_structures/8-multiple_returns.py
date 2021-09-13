#!/usr/bin/python3
def multiple_returns(sentence):
    if len(sentence) == 0:
        mul_return_tuple = (len(sentence), None)
    else:
        mul_return_tuple = (len(sentence), sentence[0])
    return mul_return_tuple
