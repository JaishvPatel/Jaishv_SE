s = input("Enter a string which includes 'not' and 'poor' : ")

print(s.index("not"))
print(s.index("poor"))

if s.count("not poor")>0:
    print(s.replace("not poor","good"))