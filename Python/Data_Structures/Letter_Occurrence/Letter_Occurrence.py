#Reviewed By Daniel
def letter_occurrences(string):
    """Gets a String and Returns Each Letter Occurrence"""
    occurrences = {}
    for char in string:
        occurrences[char] = occurrences.get(char, 0) + 1 #0 - a Value To Return if The Specified Key Does Not Exist
    return occurrences

user_input = input("Please Enter a String - ")
print(letter_occurrences(user_input))