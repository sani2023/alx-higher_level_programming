#!/usr/bin/python3
n = len(argv) - 1
if n == 0:
    print("{:d}".format(n))
    return
else:
    i = 1
    add = 0
    while i <= n:
        add += int(argv[i])
        i += 1
        print("{:d}".format(add))

if __name__ == "__main__":
    import sys
    add(sys.argv)
