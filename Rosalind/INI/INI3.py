import CodingPlatforms.Rosalind.INI.DatasetReader as dsr


def get_substrings(strg, index_list):
    strg = "".join(strg)
    result = []
    for i in range(0, len(index_list) - 1, 2):
        result.append(strg[int(index_list[i].strip("/n")):int(index_list[i+1].strip("/n")) + 1])
    return " ".join(result)


inp = dsr.file_as_list_of_list("rosalind_ini3.txt")

dsr.write_answer_to_file("INI3.txt", get_substrings(inp[0], inp[1]))