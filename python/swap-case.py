def swap_case(s):
    charList = []
    for char in s:
        if char.isupper():
            charList.append(char.lower())
        elif char.islower():
            charList.append(char.upper())
        else:
            charList.append(char)
    return ''.join(charList)

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)
