import CodingPlatforms.Rosalind.DatasetReader as dsr
from collections import Counter


def get_gc_content(sequence):
    count = Counter(sequence)
    return float(count['C'] + count['G']) / float(len(sequence))


def get_bigger_gc(sequences):
    fasta, seq = sequences.popitem()
    perc = get_gc_content(seq)
    for key, seq in sequences.items():
        value = get_gc_content(seq)
        if value > perc:
            perc = value
            fasta = key
    return fasta, perc * 100


file = "rosalind_gc.txt"
args = dsr.file_as_fasta_dict(file)
fasta, perc = get_bigger_gc(args)
dsr.write_fasta_answer_to_file("GC.txt", fasta, perc)