# get input from user
while True:
    n = int(input("height: "))
    if n > 0 and n < 24 :
        break

print()

# print the pyramid
for i in range(n) :
    for j in range(2*n+2) :
        if j < n-i-1 :
            print(" ", end= '')
        elif j >= n-i-1 and j < n :
            print("#", end= '')
        elif j >= n and j < n+2 :
            print(" ", end= '')
        elif j >= n+2 and j < n+i+3 :
            print("#", end= '')
        elif j >= n+i+3 and j < 2*n+2 :
            print(" ", end= '')
              
    print()