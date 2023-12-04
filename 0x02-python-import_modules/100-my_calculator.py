#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    from calculator_1 import add, sub, mul, div

    argc = len(argv)
    if argc != 4:
        print('Usage: {} <a> <operator> <b>'.format(argv[0]))
        exit(1)

        ops = {
                '+': add,
                '-': sub,
                '*': mul,
                '/': div
                }
        if argv[2] in ops:
            a = int(argc[1])
            b = int(argc[3])
            op = ops[argc[2]]
            result = ops(a, b)
            print('{:d} {:s} {:d} = {:d}'.format(a, argv[2], b, result))
        else:
            print('Unknown operator. Avaible operators: +, -, *, and /')
            exit(1)
            exit(0)
