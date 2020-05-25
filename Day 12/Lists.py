if __name__ == '__main__':
    N = int(input())
    L = []
    for i in range(N):
        command = list(input().split())
        if command[0] == "insert":
            i = int(command[1])
            e = int(command[2])
            L.insert(i,e)
        elif command[0] == "print":
            print(L)
        elif command[0] == "remove":
            e = int(command[1])
            L.remove(e)
        elif command[0] == "append":
            e = int(command[1])
            L.append(e)
        elif command[0] == "sort":
            L.sort()
        elif command[0] == "pop":
            L.pop()
        elif command[0] == "reverse":
            L.reverse()