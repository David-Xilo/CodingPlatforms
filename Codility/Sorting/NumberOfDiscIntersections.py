# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(A):
    LT = []
    RT = []
    l = len(A)
    for disc in range(l):
        LT.append(- (A[disc] - disc) )
        RT.append( A[disc] + disc )
    LT.sort()
    RT.sort()
    counter = 0
    j = 0
    for i in range(len(A)):
        while j < len(A) and RT[i] >= LT[j]:
            counter += j - i
            j += 1
        if counter > 10000000: return -1
    return counter
