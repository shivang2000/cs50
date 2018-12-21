from sys import argv


def main():

    if (len(argv) == 2):
        file = open(argv[1],"r") # opening the dictionary
        i = 1 # a variable for readline arguments 
        dictionary = set() # creating set for dictionary of words that are to be bleep
        # a file loop for adding words to dictionary
        while True: 
            line = file.readline()
            if ("" == line):
                break
            line = line[:-1:1]
            dictionary.add(line)
        print("what message would you like to censor")
        text = input("")
        for word in dictionary:
            word_up = word.upper()
            length = len(word)
            temp = "*"*(length)
            text = text.replace(word, temp)
            text = text.replace(word_up , temp)
        print(text)
    else :
        print("usage: python3 bleep.py path_of_the_bleeped_word")
        return 1



        
    
        



if __name__ == "__main__":
    main()
