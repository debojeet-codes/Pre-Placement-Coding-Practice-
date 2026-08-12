# Accept scores for 3 subjects calculate the avg perentage and display the corresponding grade. (Python)

marks1 = float(input("Enter marks of subject 1: "))
marks2 = float(input("Enter marks of subject 2: "))
marks3 = float(input("Enter marks of subject 3: "))

average = (marks1 + marks2 + marks3) / 3
percentage = average

if percentage >= 90:
    grade = "A"
elif percentage >= 80:
    grade = "B"
elif percentage >= 70:
    grade = "C"
elif percentage >= 60:
    grade = "D"
else:
    grade = "F"

print("Average:", average)
print("Percentage:", percentage, "%")
print("Grade:", grade)