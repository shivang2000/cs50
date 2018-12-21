quarters = 0
dimes = 0
nickels = 0
pennies = 0 
change = eval(input("change owned: "))
print(change)
change = change * 100
while change > 0:
    if change >= 25:
        change = change - 25
        quarters = quarters + 1
    elif change >= 10:
        change = change -10
        dimes = dimes + 1
    elif change >= 5:
        change = change - 5
        nickels = nickels + 1
    elif change >= 1:
        change = change - 1
        pennies = pennies + 1
    elif change == 0:
        break 
print(f"{quarters + dimes + nickels + pennies}",quarters + dimes + nickels + pennies)