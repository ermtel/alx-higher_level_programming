#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    if len(sys.argv) == 1:
        print(0)
    else:
        sum_all = int(sys.argv[1])
        for i in range(2, len(sys.argv)):
            sum_all += int(sys.argv[i])
        print('{}'.format(sum_all))
