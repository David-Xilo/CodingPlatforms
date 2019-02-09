import CodingPlatforms.Rosalind.DatasetReader as dsr


def count_chars_in_string(list_chars, sequence):
    result = {}
    for element in list_chars:
        result[element] = 0
    for ch in sequence:
        if ch in result:
            result[ch] += 1
    return [result[key] for key in list_chars]


file = "rosalind_dna.txt"
sequence = dsr.file_as_string(file)
print(sequence)
solution = count_chars_in_string(['A', 'C', 'G', 'T'], sequence)
dsr.write_list_values_to_file("DNA.txt", solution)