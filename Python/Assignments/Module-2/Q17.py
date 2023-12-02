s=input("Enter first word : ")
s1=input("Enter second word : ")

print(s+s1)

s2=list(s)
s2[0],s2[1]=s2[1],s2[0]
s3=list(s1)
s3[0],s3[1]=s3[1],s3[0]

s4="".join(s2)
s5="".join(s3)

print(s4+s5)