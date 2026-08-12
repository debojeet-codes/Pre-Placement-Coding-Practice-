# 2. Take an integer input and print the sum of its digits along with 
# its reversed form using a simple loop. (Python)


n = int(input("Enter an integer: "))

temp = n
sum = 0
reverse = 0

while temp > 0:
    digit = temp % 10
    sum = sum + digit
    reverse = reverse * 10 + digit
    temp = temp // 10

print("Sum:", sum)
print("Reversed:", reverse)