d1={'a':100,'b':200,'c':300}
d2={'a':300,'b':200,'c':100}
d3=dict.fromkeys(d1)
for i in d3:
    d3[i]=d1.get(i)+d2.get(i)
print(d3)