
# you can write to stdout for debugging purposes, e.g.
# print "this is a debug message"

def solution(N):
    b = bin(N)
    count = 0;
    maxim = 0;
    for i in range(2, len(b)):
        if b[i] == '1':
            if maxim < count:
                maxim = count
            count = 0
        else:
            count += 1
    return maxim