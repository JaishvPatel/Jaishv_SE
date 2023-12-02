# In-built functions

s = "Tops technologies"

print(s.capitalize())  # only capitalize the first character of the string
print(s.casefold())  # converts the whole string into lower
print(s.lower())  # converts the whole string into lower case
print(s.upper())  # converts the whole string into upper case
print(s.count("o"))  # counts the number of "o" in the string
print(s.endswith("s"))  # returns boolean value if the string ends with the given character
print(s.find("o",5))  # will give index of that character after 5
print(len(s))  # find the length of the string
print(s.index("g"))  # provides the index of the character
print(s.isalnum())  # provides boolean value if string contains alphabets and numbers both. It only considers the word before the space.
print(s.isalpha)
print(s.title())  # Capitalizes the first character of each word
print(s.replace("s","t"))  # replaces the first character by the second one
print(s.center(50,"*"))
print(s.swapcase())  # Converts the lower into upper and upper into lower