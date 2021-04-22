while 1:
    try:
        n = int(input())
        s = input().split()
        maior = 0
        for num in s:
            if int(num) > maior:
                maior = int(num)
        if maior < 10:
            print("1")
        elif (maior >= 10) and (maior < 20):
            print("2")
        else:
            print("3")
    except EOFError:
        break
