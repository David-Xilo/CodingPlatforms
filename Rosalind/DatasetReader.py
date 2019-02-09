

def file_as_list(file_name):
    file = open(file_name, "r")
    result = []
    for line in file:
        words = line.split(" ")
        for word in words:
            result.append(word.strip("\n"))
    return result


def file_as_list_of_list(file_name):
    file = open(file_name, "r")
    result = []
    for line in file:
        line_list = []
        words = line.split(" ")
        for word in words:
            line_list.append(word.strip("\n"))
        result.append(line_list)
    return result


def file_as_list_of_lines(file_name):
    file = open(file_name, "r")
    return [line.strip("\n") for line in file]


def file_as_string(file_name):
    file = open(file_name, "r")
    return file.read()


def file_as_fasta_dict(file_name):
    file = open(file_name, "r")
    result = {}
    fasta = None
    seq = ""
    for line in file:
        if line[0] == ">":
            if fasta is not None:
                result[fasta] = seq
            fasta = line.strip(">\n")
            seq = ""
        elif fasta is not None:
            seq += line.strip("\n")
    result[fasta] = seq
    return result


def write_lines_to_file(file_name, lines):
    file = open(file_name, "w+")
    file.writelines(lines)
    file.close()


def write_answer_to_file(file_name, answer):
    file = open(file_name, "w+")
    file.write(str(answer))
    file.close()


def write_dict_entry_per_line(file_name, dictionary):
    file = open(file_name, "w+")
    lines = [key + " " + str(value) + "\n" for key, value in dictionary.items()]
    file.writelines(lines)
    file.close()


def write_dict_values_to_file(file_name, dictionary):
    file = open(file_name, "w+")
    key, value = dictionary.popitem()
    file.write(str(value))
    for key, value in dictionary.items():
        file.write(" ")
        file.write(str(value))
    file.close()


def write_list_values_to_file(file_name, lst):
    file = open(file_name, "w+")
    file.write(str(lst[0]))
    for i in range(1, len(lst)):
        file.write(" ")
        file.write(str(lst[i]))
    file.close()


def write_fasta_answer_to_file(file_name, fasta, perc):
    file = open(file_name, "w+")
    file.write(str(fasta))
    file.write("\n")
    file.write(str(perc))
    file.close()
