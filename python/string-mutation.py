def mutate_string(string, position, character):
    charList = list(string)
    charList[position] = character
    modifiedString = ''.join(charList)
    return modifiedString

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)
