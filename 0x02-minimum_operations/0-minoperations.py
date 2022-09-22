#!/usr/bin/python3
"""This is the minOperations function module"""


def minOperations(n):
    """number of ops to copy or paste Args:
        n: given number
    Returns: num, the number of ops
    """
    p = 2
    num = 0
    if type(n) != int or n <= 1:
        return 0
    while n != 1:
        if n % p == 0:
            n = n / p
            num = num + p
        else:
            p = p + 1
    return int(num)

