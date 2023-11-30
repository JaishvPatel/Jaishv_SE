n=25

print("*************************Welcome To Guess The Number Developed By Prashnt Shukla*********************************")
print("Hello Jaishv Welcome Let's Play A Game")
print("Guess the number between 1 to 30")

while True:
    a = int(input("Enter number : "))

    if(a>n):
        print("You guessed larger number.")
    elif(a<n):
        print("You guessed smaller number.")
    elif(a==n):
        print("You Won!!!")
        break
