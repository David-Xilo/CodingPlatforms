import CodingPlatforms.Rosalind.INI.DatasetReader as dsr


def get_even_lines_one_based(all_lines):
    return [all_lines[i] for i in range(len(all_lines)) if i % 2 != 0]



inp = dsr.file_as_list_of_lines("rosalind_ini5.txt")

dsr.write_lines_to_file("INI5.txt", get_even_lines_one_based(inp))