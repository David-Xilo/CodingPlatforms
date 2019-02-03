import CodingPlatforms.Rosalind.INI.DatasetReader as dsr


def count_words(word_list):
    counter = dict()
    for word in word_list:
        if word not in counter:
            counter[word] = 0
        counter[word] += 1
    return counter


inp = dsr.file_as_list("rosalind_ini6.txt")

dsr.write_dict_entry_per_line("INI6.txt", count_words(inp))