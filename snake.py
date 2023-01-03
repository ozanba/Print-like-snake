text = input("Enter a text: ")
length = int(input("Enter the length of snake: "))
text = text.replace("_", " ")
text_length = len(text)

for line in range(1, length+1):
    if (line % (text_length * 2)) - 1 != 0:
        if line % (text_length * 2) >= 2 and line % (text_length * 2) <= text_length + 1:
            for j in range(line % (text_length * 2) - 1):
                print(" ", end="")
        else:
            if line % text_length != 0:
                for k in range((((line // text_length) + 1) * text_length) % line + 1):
                    print(" ", end="")
            else:
                print(" ", end="")
    print(text)
