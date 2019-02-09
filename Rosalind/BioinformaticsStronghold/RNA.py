import CodingPlatforms.Rosalind.DatasetReader as dsr


def dna_to_rna(sequence):
    return sequence.replace('T', 'U')

file = "rosalind_rna.txt"
sequence = dsr.file_as_string(file)
solution = dna_to_rna(sequence)
dsr.write_answer_to_file("RNA.txt", solution)