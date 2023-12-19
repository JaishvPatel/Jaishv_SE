d={101:'jaishv',103:'prashant',105:'darshan',107:'meet',109:'jaydeep'}
count=0
for i in d:
    count+=1
if count>1:
    print("Multiple keys exist in the dictionary.")
elif count==1:
    print("Single key exists in the dictionary.")
else:
    print("This is a blank dictionary.")