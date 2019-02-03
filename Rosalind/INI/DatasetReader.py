

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