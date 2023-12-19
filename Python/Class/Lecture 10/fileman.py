# file = open("tops.txt","w")
# file.write("This is write mode")
# file.close()

# file = open("tops.txt","r")
# print(file.read())
# file.close()

# file=open("tops.txt","a")
# file.write("\nThis is append mode.")
# file.close()

file=open("tops.txt","w+")
file.write("\nThis is write + read mode.")
print(file.tell())   # tells the cursor position
file.seek(0)   # seeks the cursor to 0 index
print(file.read())
file.close()

file=open("tops.txt","r+")
print(file.read())
file.write("\nThis is read+write mode.")
file.close()