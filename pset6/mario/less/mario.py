# get input from user
while True:
    n = int(input("height: "))
    if n > 0 and n < 24 :
        break

print()

# print the pyramid
for i in range(n):
    for j in range(n):
        if j < n - i - 1:
            print(" ", end='')
        else :
            print("#", end ='')
    print()