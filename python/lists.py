if __name__ == '__main__':
    N = int(input())
    myList = [] 

    for command in range(0, N):
        commandToken = input().split()
        
        if commandToken[0] == 'insert':
            myList.insert(int(commandToken[1]), int(commandToken[2]))
        elif commandToken[0] == 'print':
            print(myList)
        elif commandToken[0] == 'remove':
            myList.remove(int(commandToken[1]))
        elif commandToken[0] == 'append':
            myList.append(int(commandToken[1]))
        elif commandToken[0] == 'sort':
            myList.sort()
        elif commandToken[0] == 'pop':
            myList.pop()
        elif commandToken[0] == 'reverse':
            myList.reverse()
