marks_input = int(input()) 
student_marks = {} 
for i in range(0, marks_input): 
    inputArray = input().split()
    marks = list(map(float, inputArray[1:]))
    student_marks[inputArray[0]] = sum(marks)/float(len(marks)) 
print("%.2f" % student_marks[input()])
