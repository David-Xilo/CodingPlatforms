import CodingPlatforms.Rosalind.DatasetReader as dsr


def hypothenuse_square(list_legs):
    return (int(list_legs[0]) ** 2) + (int(list_legs[1]) ** 2)



print(hypothenuse_square(dsr.file_as_list("rosalind_ini2.txt")))