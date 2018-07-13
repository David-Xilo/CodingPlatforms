def solution(A):
    # write your code in Python 3.6
    counter = 0
    cars = 0
    for c in A:
        if c == 0:
            cars += 1
        else:
            counter += cars
        if counter > 1000000000:
            return -1
    return counter