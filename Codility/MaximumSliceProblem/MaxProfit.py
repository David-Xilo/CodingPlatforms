# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    if not A:
        return 0
    sli = 0
    c = A[0]
    total = 0
    for i in A:
        sli += (i - c)
        if sli < 0:
            sli = 0
        if total < sli:
            total = sli
        c = i
    return total