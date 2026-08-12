# Determine whether a given 3-digit number is equal to the sum of the cubes of its digits. (Python)

n = int(input("Enter a 3-digit number: "))

temp = n
sum = 0

while temp > 0:
    digit = temp % 10
    sum = sum + digit ** 3
    temp = temp // 10

if sum == n:
    print("Armstrong no.")
else:
    print("Not an Armstrong no.")