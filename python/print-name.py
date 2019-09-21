def print_full_name(a, b):
    firstName = a
    lastName = b
    print("Hello", firstName, lastName+ "!", "You just delved into python.")

if __name__ == '__main__':
    first_name = input()
    last_name = input()
    print_full_name(first_name, last_name)
