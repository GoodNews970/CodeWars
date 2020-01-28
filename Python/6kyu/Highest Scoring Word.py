# =============================================================================
# Highest Scoring Word
# 
# Given a string of words, you need to find the highest scoring word.
# 
# Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.
# 
# You need to return the highest scoring word as a string.
# 
# If two words score the same, return the word that appears earliest in the original string.
# 
# All letters will be lowercase and all inputs will be valid.
# =============================================================================

def high(x):
    def score(letter):
            alphabet = "abcdefghijklmnopqrstuvwxyz"
            return alphabet.index(letter)+1
    x = x.split()
    points = list()
    for i in x:
        points.append(sum([score(l) for l in list(i)]))
    return x[points.index(max(points))]
    
    
x = 'man i need a taxi up to ubud' #  taxi should score highest
high(x)
x = 'what time are we climbing up the volcano' # volcano should score highest
high(x)

