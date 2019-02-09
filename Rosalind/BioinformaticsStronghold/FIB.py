import CodingPlatforms.Rosalind.DatasetReader as dsr


def memoize(f):
    lookup = {}

    def memo(x, k):
        if x not in lookup:
            lookup[x] = f(x, k)
        return lookup[x]
    return memo


@memoize
def generalized_fibonnacci(n, k):
    '''
    This function returns Lucas sequences of the form:
    U(0) = 0,
    U(1) = 1,
    U(n) = PU(n - 1) − QU(n - 2)
    where P = 1 always

    :param n: number of terms in the sequence
    :param k: Is the -Q factor in the expression above
    :return: Lucas sequence for the parameters given
    '''
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return (k * generalized_fibonnacci(n - 2, k)) + generalized_fibonnacci(n - 1, k)


file = "rosalind_fib.txt"
args = dsr.file_as_list(file)
solution = generalized_fibonnacci(int(args[0]), int(args[1]))
dsr.write_answer_to_file("FIB.txt", solution)