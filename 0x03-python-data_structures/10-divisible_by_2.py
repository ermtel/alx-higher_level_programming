#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    mod_2 = []
    for i in range(len(my_list)):
        if my_list[i] % 2 == 0:
            mod_2.append(True)
        else:
            mod_2.append(False)
    return mod_2
