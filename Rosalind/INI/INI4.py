import CodingPlatforms.Rosalind.DatasetReader as dsr


def sum_all_odds(beg, end):
    # S_n = (n/2) (2a + d(n - 1))
    # a = first term, n = no of terms, d = difference
    # a = beg, n = ceil((end-beg)/2), d = 2
    a = beg if beg % 2 != 0 else beg + 1
    d = 2
    n = ((end - beg) + 1) // 2
    return int((n / 2) * ((2 * a) + (d * (n - 1))))

inp = dsr.file_as_list("rosalind_ini4.txt")

dsr.write_answer_to_file("INI4.txt", sum_all_odds(int(inp[0]), int(inp[1])))